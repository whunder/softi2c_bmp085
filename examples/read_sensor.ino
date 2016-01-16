#define SDA_PIN  2
#define SDA_PORT PORTB
#define SCL_PIN  3
#define SCL_PORT PORTB
#include <SoftI2C_BMP085.h>

SoftI2C_BMP085 bmp;

setup() {
  Serial.begin();
}

loop() {
  bmp.begin();
  Serial.print("Temperature: ");
  Serial.print(bmp.ReadTemperature());
  Serial.print("\n");
  delay(500);
}
