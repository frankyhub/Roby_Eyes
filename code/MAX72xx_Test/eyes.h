#include "LedControl.h" //V1.0.6

//2 Module
LedControl lc=LedControl(11,13,10,2); //DIN, CLK, CS, Anzahl der Module

//4 Module
//LedControl lc=LedControl(11,13,10,4); //DIN, CLK, CS, Anzahl der Module

void eyes(){
  lc.setRow(0,0,B00111100);
  lc.setRow(0,1,B01000010);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01011010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00111100);
  lc.setRow(1,1,B01000010);
  lc.setRow(1,2,B01000010);
  lc.setRow(1,3,B01000010);
  lc.setRow(1,4,B01011010);
  lc.setRow(1,5,B01011010);
  lc.setRow(1,6,B01000010);
  lc.setRow(1,7,B00111100);
}

void eyeswink(){
  lc.setRow(0,0,B00111100);
  lc.setRow(0,1,B01000010);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00111100);
  lc.setRow(1,1,B01000010);
  lc.setRow(1,2,B01000010);
  lc.setRow(1,3,B01000010);
  lc.setRow(1,4,B01000010);
  lc.setRow(1,5,B01011010);
  lc.setRow(1,6,B01011010);
  lc.setRow(1,7,B00111100);
   delay(200);
   
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);
   delay(200);
   
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);
   delay(200);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00111100);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);
   delay(200);
   
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00111100);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);
    delay(200);

     
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00111100);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);
    delay(200);

}

void eyesclose(){
  // 2 x Eyes close
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00111100);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00000000);
  lc.setRow(1,1,B00000000);
  lc.setRow(1,2,B00000000);
  lc.setRow(1,3,B00000000);
  lc.setRow(1,4,B00111100);
  lc.setRow(1,5,B01000010);
  lc.setRow(1,6,B01011010);
  lc.setRow(1,7,B00111100);
}

void eyesclose2(){
  // 2 x Eyes up
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00111100);
  lc.setRow(0,5,B01000010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00000000);
  lc.setRow(1,1,B00000000);
  lc.setRow(1,2,B00000000);
  lc.setRow(1,3,B00000000);
  lc.setRow(1,4,B00111100);
  lc.setRow(1,5,B01000010);
  lc.setRow(1,6,B01011010);
  lc.setRow(1,7,B00111100);
}



void eyesdown(){
  // 2 x Eyes down
  lc.setRow(0,0,B00111100);
  lc.setRow(0,1,B01000010);
  lc.setRow(0,2,B01000010);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01000010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01011010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00111100);
  lc.setRow(1,1,B01000010);
  lc.setRow(1,2,B01000010);
  lc.setRow(1,3,B01000010);
  lc.setRow(1,4,B01000010);
  lc.setRow(1,5,B01011010);
  lc.setRow(1,6,B01011010);
  lc.setRow(1,7,B00111100);
}

void eyesleft(){
  // 2 x Eyes left
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01110010);
  lc.setRow(0,5,B01110010);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00000000);
  lc.setRow(1,1,B00000000);
  lc.setRow(1,2,B00111100);
  lc.setRow(1,3,B01000010);
  lc.setRow(1,4,B01110010);
  lc.setRow(1,5,B01110010);
  lc.setRow(1,6,B01000010);
  lc.setRow(1,7,B00111100);
}

    void eyesright(){
  // 2 x Eyes right
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01000010);
  lc.setRow(0,4,B01001110);
  lc.setRow(0,5,B01001110);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B00111100);

  lc.setRow(1,0,B00000000);
  lc.setRow(1,1,B00000000);
  lc.setRow(1,2,B00111100);
  lc.setRow(1,3,B01000010);
  lc.setRow(1,4,B01001110);
  lc.setRow(1,5,B01001110);
  lc.setRow(1,6,B01000010);
  lc.setRow(1,7,B00111100);
}

    void eyesangry(){
   //2 x Eyes angry
  lc.setRow(0,0,B00000010);
  lc.setRow(0,1,B00000110);
  lc.setRow(0,2,B00001010);
  lc.setRow(0,3,B00010010);
  lc.setRow(0,4,B00101010);
  lc.setRow(0,5,B01011010);
  lc.setRow(0,6,B01000010);
  lc.setRow(0,7,B00111100);
   
  lc.setRow(1,0,B01000000);
  lc.setRow(1,1,B01100000);
  lc.setRow(1,2,B01010000);
  lc.setRow(1,3,B01001000);
  lc.setRow(1,4,B01010100);
  lc.setRow(1,5,B01011010);
  lc.setRow(1,6,B01000010);
  lc.setRow(1,7,B00111100);
}

    void hex(){
   //2 x Eyes 
  lc.setRow(0,0,0x00);
  lc.setRow(0,1,0x3C);
  lc.setRow(0,2,0x5A);
  lc.setRow(0,3,0x42);
  lc.setRow(0,4,0x42);
  lc.setRow(0,5,0x42);
  lc.setRow(0,6,0x3C);
  lc.setRow(0,7,0x00);
   
  lc.setRow(1,0,0x00);
  lc.setRow(1,1,0x3C);
  lc.setRow(1,2,0x5A);
  lc.setRow(1,3,0x42);
  lc.setRow(1,4,0x42);
  lc.setRow(1,5,0x42);
  lc.setRow(1,6,0x3C);
  lc.setRow(1,7,0x00);
}
