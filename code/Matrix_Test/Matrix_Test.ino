
#include <Wire.h>
#include "Adafruit_LEDBackpack.h"
Adafruit_8x16matrix ematrix = Adafruit_8x16matrix();

static const uint8_t PROGMEM
logo_bmp[] = {  B01111110,B10000001,B10111001,B10101001,B10111001,B10010001,B10111001,B10010001,B10010001,B10111001,B10010001,B10111001,B10101001,B10111001,B10000001,B01111110},
happy_bmp[] = {  B00000000,B00111100,B00000010,B00000010,B00000010,B00000010,B00111100,B00000000,B00000000,B00111100,B00000010,B00000010,B00000010,B00000010,B00111100,B00000000},
eyes_bmp[] = {  B00000000,B00111100,B01000010,B01001010,B01000010,B01000010,B00111100,B00000000,B00000000,B00111100,B01000010,B01001010,B01000010,B01000010,B00111100,B00000000},
sad_bmp[] =  {  B00000000,B00010000,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000,B00000000,B00010000,B00010000,B00010000,B00010000,B00010000,B00010000,B00000000},
xx_bmp[] =  {  B00000000,B00100010,B00010100,B00001000,B00010100,B00100010,B00000000,B00000000,B00000000,B00000000,B00100010,B00010100,B00001000,B00010100,B00100010,B00000000},
XX_bmp[] = {  B01000001,B00100010,B00010100,B00001000,B00010100,B00100010,B01000001,B00000000,B00000000,B01000001,B00100010,B00010100,B00001000,B00010100,B00100010,B01000001},
angry_bmp[] = {  B00000000,B00011110,B00111100,B01111000,B01110000,B00100000,B00000000,B00000000,B00000000,B00000000,B00100000,B01110000,B01111000,B00111100,B00011110,B00000000},
angry2_bmp[] = {  B00000000,B00000010,B00000100,B00001000,B00010000,B00100000,B00000000,B00000000,B00000000,B00000000,B00100000,B00010000,B00001000,B00000100,B00000010,B00000000},
sleep_bmp[] = {  B00000000,B00100010,B00110010,B00101010,B00100110,B00100010,B00000000,B00000000,B00000000,B00000000,B00100010,B00110010,B00101010,B00100110,B00100010,B00000000},
freetful_bmp[] = {  B00000000,B00100000,B00010000,B00001000,B00000100,B00000010,B00000000,B00000000,B00000000,B00000000,B00000010,B00000100,B00001000,B00010000,B00100000,B00000000},
love_bmp[] = {  B00000000,B00001100,B00011110,B00111100,B00111100,B00011110,B00001100,B00000000,B00000000,B00001100,B00011110,B00111100,B00111100,B00011110,B00001100,B00000000},
confused_bmp[] = {  B00000000,B01111100,B10000010,B10111010,B10101010,B10001010,B01111000,B00000000,B00000000,B01111100,B10000010,B10111010,B10101010,B10001010,B01111000,B00000000},
wave_bmp[] = {  B00000000,B00100000,B00010000,B00001000,B00010000,B00100000,B00010000,B00000000,B00000000,B00100000,B00010000,B00001000,B00010000,B00100000,B00010000,B00000000},
magic_bmp[] = {  B00000000,B00000000,B01111110,B11111111,B01111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B01111110,B11111111,B01111110,B00000000,B00000000},
fail_bmp[] = {  B00000000,B00110000,B01111000,B01111000,B01111100,B00111100,B00001000,B00000000,B00000000,B00001000,B00111100,B01111100,B01111000,B01111000,B00110000,B00000000},
full_bmp[] =  {   B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111 };
uint8_t eyesm_bmp[16];


void setup() {
  ematrix.begin(0x70);  // pass in the address

    ematrix.setBrightness(5);//the brightness of the LEDs use values from 0 to 15 only
  ematrix.setTextSize(1);
  ematrix.setTextWrap(false);  // we dont want text to wrap so it scrolls nicely
  ematrix.setRotation(1);
  for (int8_t x=2; x>=-54; x--) {
  ematrix.clear();
  ematrix.setCursor(x,0);
  ematrix.print("I am Robi");
  ematrix.writeDisplay();
  delay(100);}
  ematrix.setRotation(0);

}

void loop() {
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + happy_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    eyesm_bmp[0] = B00000000;eyesm_bmp[1] = B00111100;eyesm_bmp[2] = B01000010;eyesm_bmp[3] = B01110010;eyesm_bmp[4] = B01110010;eyesm_bmp[5] = B01000010;eyesm_bmp[6] = B00111100;eyesm_bmp[7] = B00000000;eyesm_bmp[8] = B00000000;eyesm_bmp[9] = B00111100;eyesm_bmp[10] = B01000010;eyesm_bmp[11] = B01110010;eyesm_bmp[12] = B01110010;eyesm_bmp[13] = B01000010;eyesm_bmp[14] = B00111100;eyesm_bmp[15] = B00000000;
    ematrix.clear();
    ematrix.drawBitmap(0, 0,eyesm_bmp, 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + eyes_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + sad_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + angry_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + angry2_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + freetful_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + confused_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + sleep_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + love_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + wave_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + magic_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + fail_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + logo_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);
    ematrix.clear();
    ematrix.drawBitmap(0, 0, + XX_bmp , 8, 16, 1);
    ematrix.writeDisplay();
    delay(1*1000);

}
