#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 100;
const int colorG = 0;
const int colorB = 100;


void setup() {
  
   lcd.begin(16, 2);
   
   lcd.setRGB(colorR, colorG, colorB);
   
   lcd.clear();
   
   lcd.setCursor(0, 0);
   lcd.print("Getting Started");
   
   lcd.setCursor(0,1);
   lcd.print("Intel Galileo");
}

void loop() {

}



