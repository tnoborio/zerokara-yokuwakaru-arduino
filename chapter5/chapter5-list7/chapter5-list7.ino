void setup() { 
  pinMode(13, INPUT);
  Serial.begin(115200);
}

void loop() {
  if (digitalRead(13)) {
    Serial.println("HIGH"); 
  } else {
    Serial.println("LOW");
  }
}