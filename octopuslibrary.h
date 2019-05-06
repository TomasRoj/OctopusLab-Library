/*
    octopuslibrary. Library to help users with using Octopuslab boards.
    Originally created by Tomas Roj.
    This and other files are availibe under MIT license. This comment must be included in any future distibution.
*/

#ifndef octopuslibrary_h
#define octopuslibrary_h

#include "Arduino.h"

//pins

//DC motors with L293D
#define MOTOR_12EN 25
#define MOTOR_34EN 15
#define MOTOR1A 26
#define MOTOR2A 12
#define MOTOR3A 14
#define MOTOR4A 27

//PWM / servos //WS
#define PIN_PWM1 17
#define PIN_PWM2 16
#define PIN_PWM3  4
#define PIN_WS 13

//buttons and other stuff
#define DEV1 32
#define DEV2 33 

//led
#define BUILT_IN_LED = 2;

//Servo(s) / PWM
#define SERVO1 = 17; 
#define SERVO2 = 16;
#define SERVO3 = 4;

//Analog inputs
#define I36 = 36;
#define I39 = 39;
#define I34 = 34;
#define I35 = 35;

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
