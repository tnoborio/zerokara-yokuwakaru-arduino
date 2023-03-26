#include <ArduinoESPAT.h> 

#define TEMPPIN A0

ESPAT espat("SSID", "PASS");

void getResp(char c){
  Serial.print(c);
}

void setup(){
  pinMode(TEMPPIN, INPUT);
  Serial.begin(115200);

  if(espat.begin()){
    Serial.println("Initialize OK");
  }else{
    Serial.println("Initialize Failed");
  }

  if(espat.tryConnectAP()){
    Serial.println("Connected");
  }else{
    Serial.println("Connect Failed");
  }

  Serial.println(espat.clientIP());
}

void loop() { 
  int data = analogRead(0);
  int v = map(data, 0, 1023, 0, 5000);
  int temp = map(v, 300, 1600, -30, 100);

  espat.get("maker.ifttt.com", "/trigger/button_pressed/with/key/IFTTTKEY? value1=" + String(temp), 80);
  
  Serial.println("Send to IFTTT. " + String(temp));

  delay(3600000UL);
}
