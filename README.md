# DFRobot_MAX31855 Gravity: Digital High Temperature Sensor (K-type)
MAX31855 is a temperature measuring device.This converter resolves temperatures to 0.25℃, allows readings as high as +1800℃ and as low as -270℃.

## Table of Contents

* [Summary](#summary)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

<snippet>
<content>

## Summary
This is a Library for MAX31855,the function is to read the temperature by thermocouple.
If warming 'ImportError: No module named wiringpi' in raspberry, you need to execute  `pip install wiringpi`.

## Methods

### Arduino
```C++

#include <DFRobot_MAX31855.h>
/*
 * @brief The constructor
 */
DFRobot_MAX31855();

/*
 * @brief Detect I2C device.
 *
 * @return true if execute successfully, false otherwise.
 */
bool scan();

/*
 * @brief Read the temperature.
 *
 * @return temperature if execute successfully.
 */
float readCelsius();
```
### micropython
```python

import MAX31855
/*
 * @brief The constructor.
 *
 * @param i2c I2C object.
 */
MAX31855(i2c)

/*
 * @brief Detect I2C device.
 *
 * @return True if execute successfully, False otherwise.
 */
scan()

/*
 * @brief Read the temperature.
 *
 * @return temperature if execute successfully.
 */
readCelsius()
```
### Raspberry Pi
```python

import DFRobot_MAX31855
/*
 * @brief The constructor.
 */
DFRobot_MAX31855()

/*
 * @brief Read the temperature.
 *
 * @return temperature if execute successfully.
 */
readCelsius()
```
## Compatibility

MCU                | Work Well | Work Wrong | Untested  | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Raspberry Pi |      √       |             |            | 
FireBeetle-ESP32 |      √       |             |            | 
FireBeetle-ESP8266 |     √        |             |            | 
Leonardo |     √        |             |            | 

## History

- data 2018-3-6
- version V0.1

## Credits

- author [Luyuhao  <yuhao.lu@dfrobot.com>]


