 /*!
  * file DFRobot_MAX31855.ino
  * 
  * Connect MAX31855 and Arduino ,then download this example
  * @n open serial monitor to check the temperature.
  *
  * Copyright   [DFRobot](http://www.dfrobot.com), 2016
  * Copyright   GNU Lesser General Public License
  *
  * version  V0.1
  * date  2018-3-6
  */
  
#include <DFRobot_MAX31855.h>

DFRobot_MAX31855 max31855;

void setup(){
  /*Set baudrate*/
  Serial.begin(9600);
}

void loop(){
  /*Read Celsius*/
  float temp = max31855.readCelsius();
  Serial.println(temp);
  delay(1000);
}