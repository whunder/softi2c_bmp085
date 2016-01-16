Arduino SoftI2C_BMP085 library
==============================

Modified Adafruit_BMP085 library which uses
digital pins for I2C using the SoftI2CMaster library.  
Requires SoftI2CMaster Arduino library.

Example usage:

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

Written by Daniel Lima for Biofeedback Analysis Ltd (2016).  
Original Adafruit library written by Limor Fried/Ladyada for Adafruit Industries.  
BSD license, all text above must be included in any redistribution
