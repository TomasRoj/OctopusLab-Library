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

    AF_DCMotor Motor1(motor1);
    AF_DCMotor Motor2(motor2);
    AF_DCMotor Motor3(motor2);
    AF_DCMotor Motor4(motor2);
}

void setupServo(){
    #include <Servo.h>     
    Servo myservo;        
    myservo.attach(servo1);   
}
void setup()
{
  myservo.attach(9);   //tento motor je připojen na pin 9
}
}

void setupAll(){
    setupLed();
    setupMotors();
    setupServo();
}