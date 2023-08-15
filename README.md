# Module for measuring of current and voltage based on INA219 sensor

A complete monitoring system including a battery and even a solar panel or a DC motor is not just a simple matter. 

![assembled module](https://github.com/LaskaKit/INA219-Current-Sensor/blob/main/img/3-5.jpg)

The INA219 sensor is an integrated circuit developed by Texas Instruments to measure current and voltage in electrical circuits. This sensor is often used to monitor and control the power consumption of electrical equipment. Its main purpose is to provide an accurate and reliable way to measure input voltage and current consumption for a variety of applications, including powering embedded systems, solar panels, batteries, motors, LED lighting, and other devices.

The LTR390 sensor is located on our standard size and dimension module, where you will find [two uŠup connectors](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%CE%BCsup/) and also a place to male/female header with a standard 2.54mm pitch. From the uSup connector you can conveniently connect the module with LTR390 to other modules and development boards. 

And what another modules you can use? For example the sensor [SCD41 for measurement of CO2, temperature and humidity](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/), sensor SHT41 [temperature nad humidity](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/) and [sensor of pressure, temperature, humidity BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [RTC - Real Time Clock](https://www.laskakit.cz/laskakit-ds3231-orig--rtc-hodiny-realneho-casu/) with DS3231 or [OLED display with 1.3" dimension and 128x64px resolution](https://www.laskakit.cz/laskakit-oled-displej-128x64-1-3--i2c/?variantId=11903).

You can connect all these modules also to our evaluation boards such as [Meteo Mini with solar panel input](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), easily programmed [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), super [low power and small ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk with ESP32 and huge 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) or [popular eval board with ESP32 and 3.5" TFT display](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). 

Finally, it is not necessary to use only our eval boards, you can use [common Arduino boards](https://www.laskakit.cz/arduino-2/), single-board computers as [Rock Pi or Raspberry Pi](https://www.laskakit.cz/mini-pc/) or another popular evaluation boards.

![Bottom side of module](https://github.com/LaskaKit/INA219-Current-Sensor/blob/main/img/3-5.jpg)

On the back of the module you will find two solder bridges for I2C address selection. The INA219 has 2 inputs for setting the I2C address, so you can use up to 4 modules at a time, each with a different combination of solder bridges. 

Another solder bridge is the one that connects the pull-up resistors on the I2C bus. By default they are connected-shorted - it means, the pull-up resistors are connected to the I2C bus. 

The pull-up resistor has a value of 100mR. The sensor can be powered from 3.3V up to 5.5V. The maximum input voltage that the INA219 can measure is 26V. 

Supported library in Arduino IDE is available on [https://github.com/adafruit/Adafruit_INA219](https://github.com/adafruit/Adafruit_INA219)</br>
We prepared the example codes available on [https://github.com/LaskaKit/INA219-Current-Sensor/tree/main/SW](https://github.com/LaskaKit/INA219-Current-Sensor/tree/main/SW)
