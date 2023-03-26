#include <SoftwareSerial.h>

SoftwareSerial atp(3,2);

void setup() { 
  atp.begin(9600);
  atp.print("?"); 
  atp.println("aiueo");
}

void loop() {
}