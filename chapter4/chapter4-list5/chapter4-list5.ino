void setup(){
  pinMode(3, OUTPUT);
}

void loop(){
  int val = analogRead(0);
  int led = 255 - (val / 4); 
  analogWrite(3, led);
}