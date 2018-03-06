#ifndef _DFRobot_MAX31855_H_ 
#define _DFRobot_MAX31855_H_

#include <Arduino.h>
#include <Wire.h>

#define I2C_Addr (0x10)

class DFRobot_MAX31855{
public:
  unsigned char rxbuf[4] = {0};
  float readCelsius();
  DFRobot_MAX31855();
  ~DFRobot_MAX31855();

private:
  void readData(int Reg ,int Num);
  
};

#endif