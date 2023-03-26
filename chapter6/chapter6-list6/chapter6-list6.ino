void setup() {
  Serial.begin(115200);
}
void loop() {
  int data = analogRead(0);
  int v = map(data, 0, 1023, 0, 5000);
  int temp = map(v, 300, 1600, -30, 100);
  Serial.println(String(v) + " -> " + String(temp));
  delay(500);
}