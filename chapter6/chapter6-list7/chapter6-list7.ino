void setup() {
  Serial.begin(115200); 
  pinMode(7, OUTPUT);
}

void loop() {
  int data = analogRead(0);
  int v = map(data, 0, 1023, 0, 5000);
  int temp = map(v, 300, 1600, -30, 100);
  Serial.println(String(v) + " -> " + String(temp));

  if (temp > 25) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }

  delay(500); 
}