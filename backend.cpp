#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

float tempC, tempF;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {

  tempC = CircuitPlayground.temperature();

  Serial.print("TempC: ");
  Serial.println(tempC);
  for(int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i,  0x2d8544);
  }

  delay(1000);
}
