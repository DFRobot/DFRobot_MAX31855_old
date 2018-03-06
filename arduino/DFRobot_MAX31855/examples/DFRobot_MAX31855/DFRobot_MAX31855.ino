#include <DFRobot_MAX31855.h>

DFRobot_MAX31855 max31855;

void setup(){
  Serial.begin(9600);
}

void loop(){
  float temp = max31855.readCelsius();
  Serial.println(temp);
  delay(1000);
}