void loop() {
  int sound = analogRead(0);

  if (sound > 300) { 
    analogWrite(6, 255); 
    delay(2000); 
    analogWrite(6, 0);
  }
}