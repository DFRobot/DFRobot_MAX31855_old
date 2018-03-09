#ifndef _DFRobot_MAX31855_H_ 
#define _DFRobot_MAX31855_H_

#include <Arduino.h>
#include <Wire.h>

#define MAX31855_Addr (0x10)

class DFRobot_MAX31855{
public:
  float readCelsius();
  DFRobot_MAX31855();
  unsigned char scan();
private:
  void readData(int Reg,int Num);
};

#endif