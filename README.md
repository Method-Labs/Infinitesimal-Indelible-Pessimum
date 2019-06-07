# Infinitesimal Indelible Pessimum
  This is our first rocket. Our small, unforgettable starting point. Our objectives for it are as follows.
  - Create a small model rocket motor which has a flat thrust curve.
  - Create a rocket which uses this motor to reach 1km in height.
  - Use a flight computer to log data throughout the flight.


  The idea behind this rocket is begin to understand the fundementals of model rocketry, and move on to greater and better things with a strong knowledge base.

## Specifications
  The current specifications are as follows:
  - D Class Rocket Motor
    * 7 x 2.5cm
    * Ammonium Perchlorate and Aluminum Powder Propellant
    * Cylindrical Block Grain Geometry
    * Built-In Nozzle
  - Flight computer
    * AtMega 328PB MCU
    * BMP280 Barometer
    * MPU6050 IMU
    * MicroSD Card Reader
    * 2 Pyro Channels
  - Construction Paper Body
  - 10cm Parachute

## Other Parameters
  - Stability > 0.5
  - Burn Time > 1 sec
  - 10ns < Total Impulse < 20ns

## Target Performance
  Targeted performance numbers are as follows:
  - Over 1000 m apogee.
  - Over 200 m/s top speed.

## Milestones
  We have set a few milestones to complete throughout this project in order to ensure proper conduct and a higher chance of success:
  1. Finalize rocket motor design.
  2. Finalize rocket design.
  3. Complete flight computer program.
  4. Complete testing of prototype flight computer.
    * This flight computer will have all the capabilities of the full flight-article flight computer, but will be built with breakout boards and solderless breadboards as opposed to a PCB. It is meant to test the capabilities of a flight computer while not requiring the investment both in terms of time and money that a full flight-ready computer will require.
  5. Complete recovery system deployment testing and validation. The testing procedure will be as follows:
    1. For tests 1-5, the recovery system will be independently tested on the ground with only the flight computer hooked up. There nust be an 80% or higher success rate to pass onto the final 5 tests.
      * Success Criteria: successful nosecone separation and parachute ejection.
    2. For tests 6-10, the recovery system will be integrated with the rest of the rocket, including the flight computer and a mass simulator substitute for the rocket motor. The mass simulator can be anything with roughly the same size and mass as the flight article rocket motor. The rocket will be dropped from a height of two stories (King's Academy Clock Tower is perfect for this). Tests 6 and 7 will not be parachute tests, where the parachute will be pre-deployed and the flight computer is inactive. While tests 8-10 will be full tests where the flight computer is active and responsible for deployment.
      * Success Criteria: successful deployment of recovery system and successful soft touchdown.
  6. Complete preliminary static fire tests with the rocket motor and no instrumentation. 1 nominal test is required before passing this milestone.
    * Success Criteria: The motor is intact throughout the test and burn time is near expected value within reason.
      * <5% Deviance: Nominal performance.
      * <10% Deviance: Acceptable performance, investigation should be undertaken but tests can continue as scheduled.
      * \>10% Deviance: Unacceptable performance, investiagtion should be undertaken and tests are to be suspended.
  7. Complete static fire tests with instrumentation and testing equipment.
    * Success Criteria: Motor thrust curve is as expected within reason. Test data will be run with regressional analysis in relation to the expected curve.
      * r > 0.9: Nominal performance.
      * r > 0.7: Acceptable performance, ivestigation should be undertaken but tests can continue as scheduled.
      * r < 0.7: Unacceptable performance, investagion should be undertakenand tests are to be suspended.
  
### Launch day
  Launch day is currently targeted NET Septeber 2019. Launch conditions are as follows:
  * Wind-speed <= 11 km/h.
  * Turbulence <= 10%.
  * 15C < Temperature < 40C

  Launch operations are as follows:
  * T - 1 hour: All equipment is on-site and ready to go.
  * T - 30 minutes: All equipment is set up and operational
  * T - 10 minutes: Ignition system is armed. Final systems check (go no-go procedure).
  * T - 5 minutes: Evacuate the launch area and a 10 meter circle around it. If exclusion zone is violated, countdown resets here.
  * T - 1 minute: Final countdown begins, all cameras rolling.
  * T - 2 seconds: Ignition.
  * T0: Liftoff.

  
  Recovery operations are as follows:
  * A set of binoculars are used to keep track of the rocket throughout the launch procedure.
  * At parachute deployment, the rocket's rough position will be clear, and the recovery team should begin moving towards it.
  * At touchdown, the recovery team should approach the landing site, but be 5 meters away from the rocket at the closest. They will be equipped with a fire extinguisher in case some unburned fule burns upon contact with the ground.
  * 2 minutes later, the recovery team tests rocket body temperature by touching it. If it's too high, they wait, otherwise, they can handle it and carry it back to the launchsite.