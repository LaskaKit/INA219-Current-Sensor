# Modul pro měření proudu a napětí s čidlem INA219

Kompletní monitoring zařízení zahrnující baterii a třeba i solární panel nebo stejnosměrný motor není jen tak. 

![Osazený modul](https://github.com/LaskaKit/INA219-Current-Sensor/blob/main/img/3-5.jpg)

Senzor INA219 je integrovaný obvod vyvinutý společností Texas Instruments, který slouží k měření proudu a napětí v elektrických obvodech. Tento senzor se často používá k monitorování a řízení spotřeby energie elektrických zařízení. Jeho hlavním účelem je umožnit přesný a spolehlivý způsob měření napětí na vstupu a spotřeby proudu pro různé aplikace, včetně napájení embedded systémů, solárních panelů, baterií, motorů, LED osvětlení a dalších zařízení.

Náš modul s INA219 je osazen [dvěmi uŠup konektory](https://blog.laskakit.cz/predstavujeme-univerzalni-konektor-pro-propojeni-modulu-a-cidel-%CE%BCsup/). Díky nim jedoduše propojíš modul s řídící deskou a dalšími moduly. 

A jaké moduly to jsou? Třeba čidlo [SCD41 pro měření CO2, teploty a vlhkosti vzduchu](https://www.laskakit.cz/laskakit-scd41-senzor-co2--teploty-a-vlhkosti-vzduchu/), čidla SHT41 [teploty a vlhkosti vzduchu](https://www.laskakit.cz/laskakit-sht40-senzor-teploty-a-vlhkosti-vzduchu/) a [čidla tlaku, teploty a vlhkosti vzduchu BME280](https://www.laskakit.cz/arduino-senzor-tlaku--teploty-a-vlhkosti-bme280/), [RTC Hodiny reálného času](https://www.laskakit.cz/laskakit-ds3231-orig--rtc-hodiny-realneho-casu/) s DS3231 nebo [OLED displej o velikosti 1.3" a rozlišení 128x64px](https://www.laskakit.cz/laskakit-oled-displej-128x64-1-3--i2c/?variantId=11903).

Připojit to můžeš nejen do našich vývojových kitů jako jsou univerzální [Meteo Mini s možností připojení solárního panelu](https://www.laskakit.cz/laskakit-meteo-mini/?variantId=10473), jednoduše programovatelný [ESP32-DEVKit](https://www.laskakit.cz/laskakit-esp32-devkit/?variantId=11481), velmi [úsporný a malý kit ESP32-C3 LPKit](https://www.laskakit.cz/laskkit-esp-12-board/?variantId=10482), [ESPInk s ESP32 a velkým 4.2" ePaper](https://www.laskakit.cz/laskakit-espink-42-esp32-e-paper-pcb-antenna/?variantId=11400) nebo [populárním kitem s ESP32 a 3.5" TFT displejem](https://www.laskakit.cz/laskakit-espd-35-esp32-3-5-tft-ili9488-touch/?variantId=12158). 

Nakonec, není nutné používat pouze naše desky - použít [můžeš téměř kterékoliv Arduino](https://www.laskakit.cz/arduino-2/), jednodeskový počítač [Rock Pi nebo Raspberry Pi](https://www.laskakit.cz/mini-pc/) či jiné vývojové kity s I2C sběrnicí.

![Zadní strana modulu](https://github.com/LaskaKit/INA219-Current-Sensor/blob/main/img/3-5.jpg)

Na zadní straně modulu najdeš dva pájecí mosty pro výběr I2C adresy. INA219 má 2 vstupy pro nastavení I2C adresy, dohromady tak můžeš najednou použít až 4 moduly a u každého propájet jinou kombinaci pájecích mostů. 

Dalším pájecím mostem je ten, který propojuje pull-up rezistory na I2C sběrnici. Ve výchozím nastavení jsou propojeny - tedy pull-up rezistory jsou připojeny na I2C sběrnici. 

Snímací rezistor má hodnotu 100mR. Senzor může být napájen od 3.3V až do 5.5V. Maximální vstupní napětí, které může INA219 měřit je 26V. 

Podporovaná Arduino knihovna je například tato [https://github.com/adafruit/Adafruit_INA219](https://github.com/adafruit/Adafruit_INA219)</br>
Připravili jsme i vzorové kódy, ty najdeš na [https://github.com/LaskaKit/INA219-Current-Sensor/tree/main/SW](https://github.com/LaskaKit/INA219-Current-Sensor/tree/main/SW)
