#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(10, 6, NEO_GRB + NEO_KHZ800);
 
void setup() { 
  pinMode(13, INPUT);
  pixels.begin();
  Serial.begin(9600);
}

uint32_t color(int index) {
  switch (index) {
    case 0:
      return pixels.Color(255, 0, 0);
    case 1:
      return pixels.Color(0, 255, 0);
    case 2:
      return pixels.Color(0, 0, 255);
    case 3:
      return pixels.Color(255, 255, 255);
    case 4:
      return pixels.Color(255, 255, 0);
    case 5:
      return pixels.Color(255, 0, 255); 
    case 6:
      return pixels.Color(0, 255, 255); 
  }
}

void loop() {
  if (digitalRead(13)) {
    for(int i = 0; i < 10; i++){
      for (int j = 0; j < 10; j++) {
        pixels.setPixelColor(j, color((j + i) % 7));
        if(j==0)
          Serial.println((j + i) % 7);
      }
      pixels.show();
      delay(200);
    }
  }
}
