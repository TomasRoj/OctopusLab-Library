/*
    octopuslibrary. Library to help users with using Octopuslab boards with ESP32: ROBOTboard and IOTboard
    Originally created by Tomas Roj and ing. Jan Copak.
    This and other files are available under MIT license. This comment must be included in any future distribution.
*/


/* This .h file contains all the pins and functions what will users use when imported. 
 * It helps that we will not need to find original pin numbers and we can just remember
 * the name what we want to use. While using library, user uses this file for the pin
 * numbers.
*/ 

#define octopuslibrary_h

/* We must include the official Arduino C++ extension so we can use
 * methods like pinMode() or digitalWrite().
*/

#include "Arduino.h"

// Base class for things what all the classes have together.

class OctopusLibrary {

    public:

    private:
        
}

// Class for robot board.

class RobotBoard: public OctopusLibrary {

    public:

        /* Here we define all the functions What we use in
        * the .cpp file - the main code of the library.
        * Any new function what we will want to implement later on
        * we must define here first.
        */

        // Pins for another things
        void led_blinking();
        void setupLed();
        void setupMotors();
        void setupServo();

        // This function setups all the above. Please edit this function too
        // so it can setup the new function too with others on one call.
        void setupAll();

    private:
        //LED on board (built in)
        #define BUILT_IN_LED 2

        // All the pins used for DC motors
        #define PIN_MOTOR_12EN 25
        #define PIN_MOTOR_34EN 15
        #define PIN_MOTOR_1A 26
        #define PIN_MOTOR_2A 12
        #define PIN_MOTOR_3A 14
        #define PIN_MOTOR_4A 27

        //Buttons and other stuff
        #define PIN_WS 13   // RGB LED
        #define PIN_DEV1 32 // Dallas 1-Wire (thermometer)
        #define PIN_DEV2 33

        //Servo(s) / PWM
        #define PIN_SERVO1 17
        #define PIN_SERVO2 16
        #define PIN_SERVO3 4 // ROBOT board button

        //Analog inputs
        #define PIN_I36 36 //battery
        #define PIN_I39 39
        #define PIN_I34 34
        #define PIN_I35 35
}

// Class for IoT board

class IoTBoard: public OctopusLibrary {

    public:

    private:

}