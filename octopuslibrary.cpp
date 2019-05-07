#include "Arduino.h"
#include "octopuslibrary.h"

void led_blinking(){
    
    setupLed()
    
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(1500);
}

void setupLed(){
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
}

void setupMotors(){
    #include <AFMotor.h>

    AF_DCMotor Motor1(PIN_MOTOR_1A);
    AF_DCMotor Motor2(PIN_MOTOR_2A);
    AF_DCMotor Motor3(PIN_MOTOR_3A);
    AF_DCMotor Motor4(PIN_MOTOR_4A);
}

void setupServo(int servoPin){
    #include <ESP32_Servo.h>     
    Servo myservo;        
    myservo.attach(servoPin);   
}


void setupAll(){
    setupLed();
    setupMotors();
    setupServo();
}