// include the library code:
#include <LiquidCrystal.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(7, 8); // CE, CSN
#include <SPI.h>
#include <SD.h>

File myFile;

const int rs = 22, en = 25, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const byte address[6] = "00001";

struct package{
    float temperature = 0;
    float weight = 0;
};

typedef struct package Package;
Package data;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
}

void loop() {
  if (radio.available()) {
    lcd.setCursor(0, 0);
    radio.read(&data, sizeof(data));
    lcd.print(data.temperature + " C");
    lcd.setCursor(0, 1);
    lcd.print(data.weight + " g");
  }
}
