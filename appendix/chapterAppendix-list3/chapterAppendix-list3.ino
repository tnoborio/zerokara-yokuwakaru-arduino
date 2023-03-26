void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);
}

void loop() {
  int val = analogRead(0); 
  Serial.println(val);
  if (val > 300) {
    digitalWrite(2, LOW);
  } else {
    digitalWrite(2, HIGH);
  }
  delay(100);
}