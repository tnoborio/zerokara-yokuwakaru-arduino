void setup() {
  Serial.begin(115200);  
}

void loop() {
  int val = analogRead(0); 
  Serial.println(val);
  delay(100);  
}