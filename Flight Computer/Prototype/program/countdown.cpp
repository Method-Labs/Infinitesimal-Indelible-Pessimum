#include <LiquidCrystal.h>
#include <Adafruit_BMP280.h>
#include <Adafruit_Sensor.h>
#include <MPU9250.h>
#include <countdown.h>

countdown::countdown(int s){
    for(int i = 0 i < s; i++){
        lcd.write(s - i); //write the remaining time to the LCD
        delay(1000); //wait 1 second
        lcd.clear(); //Clear the LCD
    }
    ignite();
    lcd.write("Ignition!");
}

void countdown::ignite(int port){
    digitalWrite(port, HIGH);
}