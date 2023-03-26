#define LED 7
#define SWITCH 13

boolean LEDOn = false;

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(SWITCH, INPUT);
}

void loop() {
  if (digitalRead(SWITCH)) {
    if (LEDOn) {
      LEDOn = false; 
      digitalWrite(LED, LOW);
    } else {
      LEDOn = true;
      digitalWrite(LED, HIGH);
    }
  }
}