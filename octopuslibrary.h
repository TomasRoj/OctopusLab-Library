/*
    octopuslibrary. Library to help users with using Octopuslab boards.
    Originally created by Tomas Roj.
    This and other files are availibe under MIT license. This comment must be included in any future distibution.
*/

#ifndef octopuslibrary_h
#define octopuslibrary_h

#include "Arduino.h"

//pins

//motors
static const uint8_t MOTOR1 = D26;
static const uint8_t MOTOR2 = D12;
static const uint8_t MOTOR3 = D14;
static const uint8_t MOTOR4 = D27;

//led
static const uint8_t BUILT_IN_LED = D2;

//Servo(s)
static const uint8_t SERVO1 = 17;
static const uint8_t SERVO2 = 16;
static const uint8_t SERVO3 = 4;

class octopuslibrary{

    public:
        octopuslibrary();
        void led_blinking();
        void setupLed();
        void setupMotors();
        void setupServo();
        void setupAll()
}

#endif 
