#include <SoftwareSerial.h>
#include "ArduinoESPAT.h"

ESPAT espat("SSID", "PASSWORD");

void setup() {
  Serial.begin(115200);
  if (espat.begin()) {
    Serial.println("Initialize OK");
  } else {
    Serial.println("Initialize Fail");
  }

  if (espat.changeMode(1)) {
    Serial.println("Mode OK");
  } else {
    Serial.println("Mode not OK");
  }

  if (espat.tryConnectAP()) {
    Serial.println("Connected");
  } else {
    Serial.println("Connect Failed");
  }

  Serial.println(espat.clientIP());
  Serial.println(espat.get("gihyo.jp", "/", 80));
}

void loop(){
}
