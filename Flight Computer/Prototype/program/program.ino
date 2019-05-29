#include "MPU9250.h"
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>


MPU9250 mpu = MPU9250();
Adafruit_BMP280 bme; // I2C

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  uint8_t temp = mpu.begin();
  Serial.println(F("BMP280 test"));

  if (!bme.begin()) {
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  mpu.get_accel();
  Serial.print("X: ");  Serial.print(mpu.x / 16384.0);
  Serial.print("Y: "); Serial.print(mpu.y / 16384.0);
  Serial.print("Z: "); Serial.print(mpu.z / 16384.0);
  delay(40);
  Serial.print("       Approx altitude = ");
  Serial.print(bme.readAltitude(1013.25)); // this should be adjusted to your local forcase
  Serial.println(" m");
  delay(40);
}