#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <MPU9250.h>

class countdown{
    private:
        /*
         * Ignite method
         * This is the final use of the umbilical cord which attaches the
         * rocket to the launchpad. The ignition signal is sent to the
         * ignition circuit, and the servo is moved to cut the cord.
         * This removes all communication between the launchpad computer
         * and the flight computer, and launches the rocket.
        */
        void ignite();

    public:
        /*
         * Constructor
         * Calls methods in order, and flies the rocket.
        */
        countdown(int s);
}