# MAX31855 Library 
This is a Library for MAX31855.

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

## Methods

### Arduino
```C++

#include <DFRobot_MAX31855.h>
/*
 * @brief The constructor
 */
DFRobot_MAX31855();

/*
 * @brief Read the temperature.
 */
float readCelsius();

### micropython
``` python

import MAX31855
/*
 * @brief The constructor.
 *
 * @param i2c I2C object.
 */
MAX31855(i2c)

/*
 * @brief Read the temperature.
 */
readCelsius()

### Raspberry Pi
``` python

import DFRobot_MAX31855
/*
 * @brief The constructor.
 */
DFRobot_MAX31855()

/*
 * @brief Read the temperature.
 */
readCelsius()

## Compatibility

MCU                | Work Well | Work Wrong | Untested  | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Raspberry Pi |      √       |             |            | 
FireBeetle-ESP32 |       √      |             |            | 
FireBeetle-ESP8266 |      √       |             |            | 
Leonardo |      √       |             |            | 

## History

- data 2018-3-6
- version V0.1

## Credits

- author [Luyuhao  <yuhao.lu@dfrobot.com>]


