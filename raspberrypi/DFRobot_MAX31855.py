# -*- coding: utf-8 -*-
import time
import sys
import wiringpi

MAX31855_ADDR = 0x10

class DFRobot_MAX31855:
  def __init__(self):
    self.i2c = wiringpi.wiringPiI2CSetup(MAX31855_ADDR)
  
  def readData(self):
    a = wiringpi.wiringPiI2CReadReg8(self.i2c,0x00)
    b = wiringpi.wiringPiI2CReadReg8(self.i2c,0x01)
#    c = wiringpi.wiringPiI2CReadReg8(self.i2c,0x02)
    d = wiringpi.wiringPiI2CReadReg8(self.i2c,0x03)
    return a,b,d
  
  def readCelsius(self):
    a,b,d = self.readData()
    if(d&0x7):
      return False
    if(a&0x80):
      a = 0xff - a
      b = 0xff - b
      temp = -((((a << 8) | b) >> 2)+1)*0.25
      return temp
    temp = (((a << 8) | b) >> 2)*0.25
    return temp
  
