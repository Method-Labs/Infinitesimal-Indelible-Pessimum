#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <MPU9250.h>

class calibrator{
    private: //private methods and variables
        void calibrateIMU(); //calibrate inertial measurement unit method
        float calibrateBPU(); //calibrate barometric pressure unit method
    public: //public methods and variables
        float altitude;

        /* 
         * Constructor
         * Communicates with the hardware and calibrates it according to the current environmental values.
         * Changes complete to true once calibration process is complete.
        */
        calibrator(Adafruit_BMP280 BPU, MPU9250 IMU);
};