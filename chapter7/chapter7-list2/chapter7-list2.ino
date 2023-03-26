#include <ArduinoESPAT.h> 

ESPAT espat("SSID", "PASS");

void setup() {
  pinMode(7, INPUT);

  delay(1000);
  Serial.begin(9600);

  if (espat.begin()) { 
    Serial.println("Initialize OK");
  } else {
    Serial.println("Initialize Failed"); 
  }

  if (espat.tryConnectAP()) { 
    Serial.println("Connected");
  } else {
    Serial.println("Connect Failed");
  }

  Serial.println(espat.clientIP()); 
}

void loop() {
  if (digitalRead(7) == LOW) {
   return; 
  }
  
  espat.get("maker.ifttt.com", "/trigger/button_pressed/with/key/IFTTTKEY", 80);

  delay(1000);
}
