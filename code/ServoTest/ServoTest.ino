/*************************************************************************************************
                                      PROGRAMMINFO
**************************************************************************************************
Funktion: Servo Testprogramm

**************************************************************************************************
Version: 31.07.2026
**************************************************************************************************
Board: NANO Old Bootloader
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

#include <VarSpeedServo.h> 
 
VarSpeedServo myservo1;
VarSpeedServo myservo2;
VarSpeedServo myservo3;
VarSpeedServo myservo4;  

//PIN Belgung für NANO Board 3.1 2022 V2
const int servoPin1 = 6; 
const int servoPin2 = 7; 
const int servoPin3 = 9; 
const int servoPin4 = 10; 

const  int CAL = 15;
const  int SPEED1 = 30;
const  int SPEED2 = 80;


   
void setup() { 
/*
    //Stelle die Servos auf Position 90
    myservo1.attach(servoPin1);
    myservo2.attach(servoPin2);
    myservo3.attach(servoPin3);
    myservo4.attach(servoPin4);

    myservo1.slowmove (90 , CAL);
    myservo2.slowmove (90 , CAL);
    myservo3.slowmove (90 , CAL);
    myservo4.slowmove (90 , CAL);
    */

  //Stelle die Servos auf Position 0
  
  myservo1.attach(servoPin1);  
  myservo1.write(0,CAL,true); 
  delay(2000);
  myservo2.attach(servoPin2);  
  myservo2.write(0,CAL,true); 
  delay(2000);
  myservo3.attach(servoPin3);  
  myservo3.write(0,CAL,true); 
  delay(2000); 
  myservo4.attach(servoPin4);  
  myservo4.write(0,CAL,true);
   
  delay(2000);
  
} 

void loop() {

  //Stelle die Servos mit Speed1 auf Position 180°, 0°, 90° 
  //und anschliesen mit Speed 2 uf Position 180°, 0°, 90°
  
  myservo1.write(180,SPEED1,true);        
  myservo1.write(0,SPEED1,true);
  myservo1.write(90,SPEED1,true);  
  myservo1.write(180,SPEED2,true);        
  myservo1.write(0,SPEED2,true);
  myservo1.write(90,SPEED2,true);          

  delay(2000);

  myservo2.write(180,SPEED1,true);        
  myservo2.write(0,SPEED1,true);          
  myservo2.write(90,SPEED1,true);
  myservo2.write(180,SPEED2,true);        
  myservo2.write(0,SPEED2,true);          
  myservo2.write(90,SPEED2,true);  
  
  delay(2000);

  myservo3.write(180,SPEED1,true);       
  myservo3.write(0,SPEED1,true);
  myservo3.write(90,SPEED1,true);
  myservo3.write(180,SPEED2,true);       
  myservo3.write(0,SPEED2,true);
  myservo3.write(90,SPEED2,true); 
   
  delay(2000);

  myservo4.write(180,SPEED1,true);        
  myservo4.write(0,SPEED1,true); 
  myservo4.write(90,SPEED1,true); 
  myservo4.write(180,SPEED2,true);        
  myservo4.write(0,SPEED2,true); 
  myservo4.write(90,SPEED2,true);        

  delay(2000);

  while(1);
  } 
