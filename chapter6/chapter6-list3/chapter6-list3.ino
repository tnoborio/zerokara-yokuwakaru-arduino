#include <IRremote.h>
IRrecv irrecv(11);

void setup () {
  Serial.begin(115200);
  irrecv.enableIRIn();
  pinMode(13, OUTPUT);
}

void loop () {
  decode_results results;
  if (irrecv.decode(&results)) {
    digitalWrite(13, HIGH);
    delay(10000);
    digitalWrite(13, LOW);
    irrecv.resume();
  } 
}
