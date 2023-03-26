#include <FaBoLCDmini_AQM0802A.h>

FaBoLCDmini_AQM0802A lcd; 

void setup() {
  lcd.begin();
  lcd.setCursor(0, 0); 
  lcd.print("Hello!"); 
  lcd.setCursor(0, 1); 
  lcd.print("AQM0802A");
}

void loop() {
}