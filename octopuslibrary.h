/*
    octopuslibrary. Library to help users with using Octopuslab boards with ESP32: ROBOTboard and IOTboard
    Originally created by Tomas Roj and ing. Jan Copak.
    This and other files are available under MIT license. This comment must be included in any future distribution.
*/

#ifndef octopuslibrary_h
#define octopuslibrary_h

#include "Arduino.h"

//LED on board
#define BUILT_IN_LED 2

//pins
//DC motors with L293D
#define PIN_MOTOR_12EN 25
#define PIN_MOTOR_34EN 15
#define PIN_MOTOR_1A 26
#define PIN_MOTOR_2A 12
#define PIN_MOTOR_3A 14
#define PIN_MOTOR_4A 27

//buttons and other stuff
#define PIN_WS 13   // RGB LED - neopixel.lib
#define PIN_DEV1 32 // Dallas 1-Wire
#define PIN_DEV2 33

//Servo(s) / PWM
#define PIN_SERVO1 17
#define PIN_SERVO2 16
#define PIN_SERVO3 4 // ROBOT BTN

//Analog inputs
#define PIN_I36 36 //battery
#define PIN_I39 39
#define PIN_I34 34
#define PIN_I35 35

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
