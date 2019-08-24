#include <HX711.h>
#include <nRF24L01.h>
#include <printf.h>
#include <RF24.h>
#include <RF24_config.h>
#include <max6675.h>
#include <SPI.h>

//Wiring pins for load cell and temperature probe
int ktcSO = 4;
int ktcCS = 2;
int ktcCLK = 3;
int DT = 16; //A2
int loadSCK = 17; //A3

//Object definitions for modules
RF24 radio(7, 8); // CE, CSN
MAX6675 ktc(ktcCLK, ktcCS, ktcSO);
HX711 scale;

//package structure defenition
struct package{
    float temperature = 0;
    float weight = 0;
};

//package structure type defenition
typedef struct package Package;

//Instantiating package structure
Package data;

//Radio transmitting/recieving address
const byte address[6] = "00001";

void setup() {
  //Serial setup
  Serial.begin(9600);

  //Radio setup
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();

  //Load Cell Setup
  scale.begin(DT, loadSCK);
  delay(500);
}
void loop() {
  data.temperature = ktc.readCelsius(); //Read and add temperature to struct
  data.weight = (scale.read()+167556.00)/118; //Read and add weight to struct

  Serial.println(data.weight);
  
  radio.write(&data, sizeof(data));

  //scale looping
  scale.power_down();              
  delay(500);
  scale.power_up();

  delay(200);
}
