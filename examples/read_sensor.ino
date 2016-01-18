#define SDA_PIN  2
#define SDA_PORT PORTD
#define SCL_PIN  3
#define SCL_PORT PORTD
#include <SoftI2C_BMP085.h>

SoftI2C_BMP085 bmp;

setup() {
  Serial.begin(9600);
}

loop() {
  if (!bmp.begin()) {
    Serial.println("Sensor not found!");
  } else {
    Serial.print("Temperature: ");
    Serial.println(bmp.ReadTemperature());
  }
  delay(500);
}
