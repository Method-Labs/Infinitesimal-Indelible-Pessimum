#include <LiquidCrystal.h>
#include <MPU9250.h>
#include <Adafruit_BMP280.h>
#include <Adafruit_Sensor.h>
#include <countdown.h>
#include <calibrator.h>

/*
 * This is the runner program, it takes all the programs and classes
 * which have been built and integrates them together to make the 
 * prototype flight computer function as intended. Preliminary Tests
 * with the ignition and separation mechanisms will be made on this
 * computer and this program, so it is essential to get this correct 
 * before moving onto the flight article computer.
 * 
 * Author: Natheir Abu-Dahab
 * Date Created: 31/05/2019
*/

//Define Sensor Objects
MPU9250 IMU;
Adafruit_BMP280 BPU;

calibrator calibrate;
countdown cd;

void setup(){
    //Construct Sensor Objects
    IMU = new MPU9250();
    BPU = new Adafruit_BMP280();

    //Construct Cailbrator Object
    calibrate = new calibrator(BPU, IMU);

    //Construct one minute Countdown Object
    cd = new countdown(60);
}

void loop(){
    
}