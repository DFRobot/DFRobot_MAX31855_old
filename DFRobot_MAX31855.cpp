#include <DFRobot_MAX31855.h>

unsigned char rxbuf[4] = {0};

DFRobot_MAX31855::DFRobot_MAX31855(){
  Wire.begin();
}

float DFRobot_MAX31855::readCelsius(){
  readData(0x00 ,4);
  if(rxbuf[3]&0x7){
    return NAN;
  }
  if(rxbuf[0]&0x80){
    rxbuf[0] = 0xff - rxbuf[0];
    rxbuf[1] = 0xff - rxbuf[1];
    float temp = (((rxbuf[0] << 8 )| (rxbuf[1] & 0xfc)) >> 2)*0.25;
    return -(temp+1);
  }
  float temp =(((rxbuf[0] << 8 )| (rxbuf[1] & 0xfc)) >> 2)*0.25;
  return temp;
}

void DFRobot_MAX31855::readData(int Reg ,int Num){
  unsigned char i = 0;
  Wire.beginTransmission(MAX31855_Addr);
  Wire.write(Reg); 
  Wire.endTransmission();
  Wire.requestFrom(MAX31855_Addr, Num);
  while (Wire.available()){
    rxbuf[i] = Wire.read();
    i++;
  }
}

bool DFRobot_MAX31855::scan(){
  byte error, address;
  int nDevices;
  nDevices = 0;
  for(address = 1; address < 127; address++ ) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if (error == 0){
      nDevices++;
    }
  }
  if (nDevices == 0)
    return false;
  else
    return true;
}