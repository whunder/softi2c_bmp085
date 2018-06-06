#define SDA_PIN  0
#define SDA_PORT PORTF
#define SCL_PIN  1
#define SCL_PORT PORTF
#include <SoftI2C_BMP085.h>

SoftI2C_BMP085 bmp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (!bmp.begin()) {
    Serial.println("Sensor not found!");
  } else {
    Serial.print("Temperature: ");
    Serial.println(bmp.readTemperature());
  }
  delay(500);
}
