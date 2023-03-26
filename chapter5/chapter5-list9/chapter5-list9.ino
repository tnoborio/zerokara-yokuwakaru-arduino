void setup() {
  pinMode(12, INPUT);
}

void loop() {
  if (digitalRead(12)) {
    tone(13, 262, 500); 
    delay(500); 
    tone(13, 294, 500); 
    delay(500);
  } 
}