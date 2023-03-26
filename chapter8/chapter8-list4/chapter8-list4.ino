void setup() {
  pinMode(6, OUTPUT);

  analogWrite(6, 150);
  delay(500); 
  analogWrite(6, 0);
}

void loop() {
}