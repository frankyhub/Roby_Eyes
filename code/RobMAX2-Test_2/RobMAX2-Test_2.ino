/*************************************************************************************************
                                      PROGRAMMINFO
**************************************************************************************************
Funktion: MAX72xx Test mit verschiedenen Augenpaaren (eyes.h)

**************************************************************************************************
Version: 30.06.2023
**************************************************************************************************
Board: NANO
**************************************************************************************************
Libraries:
https://github.com/espressif/arduino-esp32/tree/master/libraries
C:\Users\User\Documents\Arduino
D:\gittemp\Arduino II\A156_Wetterdaten_V3
**************************************************************************************************
C++ Arduino IDE V1.8.19
**************************************************************************************************
Einstellungen:
https://dl.espressif.com/dl/package_esp32_index.json
http://dan.drown.org/stm32duino/package_STM32duino_index.json
http://arduino.esp8266.com/stable/package_esp8266com_index.json
**************************************************************************************************/

#include "eyes.h"

void setup() {
  for(int i=0;i<2;i++){
    lc.shutdown(i,false);
    lc.setIntensity(i,8);
    lc.clearDisplay(i);
  }
}  

void loop(){
   eyes();
   delay(2000);
  
   eyeswink();
   delay(2000);
    
   eyesdown();
   delay(2000);
   
   eyesclose2();
   delay(2000); 
   
   eyesleft();
   delay(2000);

   eyesright();
   delay(2000);  

   eyesclose();
   delay(2000);

    eyesangry();
    delay(2000);

    hex();
    delay(2000);
//    while(1);
  
}
