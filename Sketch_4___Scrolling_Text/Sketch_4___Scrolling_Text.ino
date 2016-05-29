#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

void setup() {
    lcd.begin(16, 2);
}

void loop() {
    lcd.clear();
    
    lcd.print("Getting started with the Intel Galileo");
    
    delay(500);
    
    for (int positionCounter = 0; positionCounter < 24; positionCounter++) {
      lcd.scrollDisplayLeft();
       
      delay(150);
    }
    delay(1000);
}

