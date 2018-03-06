import DFRobot_MAX31855
import time
max31855 = DFRobot_MAX31855.DFRobot_MAX31855()
while True:
  temp = max31855.readCelsius()
  print(temp)
  time.sleep(1)
    
