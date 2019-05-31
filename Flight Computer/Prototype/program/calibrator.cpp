#include <calibrator.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <MPU9250.h>

calibrator::calibrator(Adafruit_BMP280 BPU, MPU9250 IMU){
    if(!BPU.begin){
        Serial.println("Cannot communicate with barometric pressure unit.");
        while (1);
    }
    calibrateBPU(BPU);
    calibrateIMU(IMU);
}

void calibrator::calibrateIMU(MPU9250 IMU){
    uint8_t temp = IMU.begin();
}

void calibrator::calibrateBPU(Adafruit_BMP280 BPU){
    altitude = BPU.readPressure(); //This value will be used as a reference when calling the readAltitude function in the main program.
}