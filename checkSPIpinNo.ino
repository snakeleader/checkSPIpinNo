#include <SPI.h>

void setup() {  
  Serial.begin(115200);
  Serial.println("Check the GPIO number of SPI. of the board");
  Serial.println("-----------------------------");
  Serial.print("MOSI:");
  Serial.println(MOSI);
  Serial.print("MISO:");
  Serial.println(MISO);
  Serial.print("SCK:");
  Serial.println(SCK);
  Serial.print("SS:");
  Serial.println(SS);
}

void loop() {
  
}
