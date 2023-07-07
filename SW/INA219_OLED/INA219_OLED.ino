/*
* This example code for current and voltage from INA219 module
* is used with ESP32 LPkit board.
* ESP32-LPkit reads current and voltage from INA219 sensor 
* and shows on OLED display
*
* SDA - GPIO21
* SCL - GPIO22
*
* Made by (c) laskakit.cz 2023
*
* Libraries
* https://github.com/adafruit/Adafruit_INA219 Example is used
*/

#include <Wire.h>
#include <Adafruit_INA219.h>
#include <Adafruit_GFX.h>     // https://github.com/adafruit/Adafruit-GFX-Library
#include <Adafruit_SH110X.h>  // https://github.com/adafruit/Adafruit_SH110X

#define i2c_Address 0x3c

Adafruit_SH1106G display = Adafruit_SH1106G(128, 64, &Wire, -1); //Nastavý display
Adafruit_INA219 ina219;


void setup(void) 
{
  Serial.begin(115200);
  while (!Serial) {
      // will pause Zero, Leonardo, etc until serial console opens
      delay(1);
  }
    
  Serial.println("Hello!");
  
  // Initialize the INA219.
  // By default the initialization will use the largest range (32V, 2A).  However
  // you can call a setCalibration function to change this range (see comments).
  if (! ina219.begin()) {
    Serial.println("Failed to find INA219 chip");
    while (1) { delay(10); }
  }
  // To use a slightly lower 32V, 1A range (higher precision on amps):
  //ina219.setCalibration_32V_1A();
  // Or to use a lower 16V, 400mA range (higher precision on volts and amps):
  //ina219.setCalibration_16V_400mA();

  Serial.println("Measuring voltage and current with INA219 ...");

  display.begin(i2c_Address, true); 
  display.clearDisplay(); 
  display.setTextColor(SH110X_WHITE); 
  display.setTextSize(1); 
}

void loop(void) 
{
  float shuntvoltage = 0;
  float busvoltage = 0;
  float current_mA = 0;
  float loadvoltage = 0;
  float power_mW = 0;

  shuntvoltage = ina219.getShuntVoltage_mV();
  busvoltage = ina219.getBusVoltage_V();
  current_mA = ina219.getCurrent_mA();
  power_mW = ina219.getPower_mW();
  loadvoltage = busvoltage + (shuntvoltage / 1000);
  
  Serial.print("Bus Voltage:   "); Serial.print(busvoltage); Serial.println(" V");
  Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage); Serial.println(" mV");
  Serial.print("Load Voltage:  "); Serial.print(loadvoltage); Serial.println(" V");
  Serial.print("Current:       "); Serial.print(current_mA); Serial.println(" mA");
  Serial.print("Power:         "); Serial.print(power_mW); Serial.println(" mW");
  Serial.println("");

  display.setCursor(0,0);
  display.println((String)"Bus Voltage: "+busvoltage+"V");       //Zobrazí na displeji teplotu z čidla
  display.println((String)"Shunt Voltage: "+shuntvoltage+"V");  //Zobrazí na displeji tlak z čidla
  display.println((String)"Load Voltage: "+loadvoltage+"V");          //Zobrazí na displeji vlhkost z čidla
  display.println((String)"Current: "+current_mA+"mA");          //Zobrazí na displeji Gas Resistance z čidla
  display.println((String)"Power:" +power_mW+ "mW"); //Zobrazí na displeji nadmořskou výšku vypočtenou z údajů z čidla
  display.display(); 
  delay(2000);
  display.clearDisplay();

}
