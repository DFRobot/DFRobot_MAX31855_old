import DFRobot_MAX31855
import time
max31855 = DFRobot_MAX31855.DFRobot_MAX31855()  #Create MAX31855 object
while True:
  temp = max31855.readCelsius()                 #Read celsius
  print("temperature:%s *C" %temp)
  time.sleep(1)
    
