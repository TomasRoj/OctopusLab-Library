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
static const uint8_t MOTOR1 = 26;
static const uint8_t MOTOR2 = 12;
static const uint8_t MOTOR3 = 14;
static const uint8_t MOTOR4 = 27;

//led
static const uint8_t BUILT_IN_LED = 2;

//Servo(s) / PWM
static const uint8_t SERVO1 = 17; 
static const uint8_t SERVO2 = 16;
static const uint8_t SERVO3 = 4;

//Analog inputs
static const uint8_t I36 = 36;
static const uint8_t I39 = 39;
static const uint8_t I34 = 34;
static const uint8_t I35 = 35;


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
