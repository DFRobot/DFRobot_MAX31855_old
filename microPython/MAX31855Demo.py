from machine import Pin,I2C
import MAX31855
import time 

i2c = I2C(scl=Pin(22), sda=Pin(21), freq=10000)

max31855 = MAX31855.MAX31855(i2c)

while True:
  if(max31855.scan() == True):      #detect i2c device
    temp = max31855.readCelsius()   #Read Celsius
    print("temperature:%s *C" %temp)
  else:                             #No I2C was detected.
    print("No I2C devices!")
  time.sleep(1)
