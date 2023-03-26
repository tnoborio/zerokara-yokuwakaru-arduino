#include <FaBoLCDmini_AQM0802A.h>
#include <SoftwareSerial.h>

FaBoLCDmini_AQM0802A lcd;
SoftwareSerial atp(3,2); //rx , tx

void lcdWrite(int x, int y, char c) {
  lcd.setCursor(x, y);
  lcd.print(c);
}

void setup() {
  lcd.begin();
  pinMode(6, OUTPUT);

  atp.begin(9600);
  atp.print("?");

  lcd.clear();
  lcdWrite(2, 0, 'o');
  lcdWrite(5, 0, 'o');
  lcdWrite(3, 1, '-');
  lcdWrite(4, 1, '-');
  analogWrite(6, 100);
  delay(500);
  analogWrite(6, 0);

  atp.println("konnnichiwa"); 
}

void loop() {
  int sound = analogRead(0);

  if (sound > 300) { 
    analogWrite(6,255); 
    delay(2000); 
    analogWrite(6,0);
  }
}
