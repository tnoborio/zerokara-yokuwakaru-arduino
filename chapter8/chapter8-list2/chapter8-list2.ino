#include <FaBoLCDmini_AQM0802A.h>

FaBoLCDmini_AQM0802A lcd;

void lcdWrite(int x, int y, char c) {
  lcd.setCursor(x, y);
  lcd.print(c);
}

void setup() {
  lcd.begin();
}

void loop() {
  lcd.clear(); 2 lcdWrite(2, 0, 'o'); 
  lcdWrite(5, 0, 'o'); lcdWrite(3, 1, '-'); 
  lcdWrite(4, 1, '-'); 
  delay(1000); 
  lcd.clear();
  lcdWrite(2, 0, '-');
  lcdWrite(5, 0, '-');
  lcdWrite(3, 1, '-');
  lcdWrite(4, 1, '-');
  delay(1000);
}