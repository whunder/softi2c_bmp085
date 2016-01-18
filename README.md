Software I2C BMP085 Arduino library
==============================

Modified Adafruit_BMP085 library which uses
digital pins for I2C using the SoftI2CMaster library.  
Requires SoftI2CMaster Arduino library.

It's a drop-in replacement for the Adafruit Library, see an example:

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

Written by Daniel Lima for Biofeedback Analysis Ltd (2016).  
Original Adafruit library written by Limor Fried/Ladyada for Adafruit Industries.  
BSD license, all text above must be included in any redistribution
