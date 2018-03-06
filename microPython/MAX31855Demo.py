from machine import Pin,I2C
import MAX31855
import time 

i2c = I2C(scl=Pin(22), sda=Pin(21), freq=10000)

max31855 = MAX31855.MAX31855(i2c)

while True:
  temp = max31855.readCelsius()
  print(temp)
  time.sleep(1)