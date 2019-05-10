#include "Arduino.h"
#include "octopuslibrary.h"

void led_blinking() {

  setupLed()

  digitalWrite(BUILT_IN_LED, HIGH);
  delay(1500);
  digitalWrite(BUILT_IN_LED, LOW);
  delay(1500);
}

void setuLed() {
  pinMode(BUILT_IN_LED, OUTPUT);
  digitalWrite(BUILT_IN_LED, LOW);
}

void setupMotors() {
  #include <AFMotor.h>

  AF_DCMotor Motor1(PIN_MOTOR_1A);
  AF_DCMotor Motor2(PIN_MOTOR_2A);
  AF_DCMotor Motor3(PIN_MOTOR_3A);
  AF_DCMotor Motor4(PIN_MOTOR_4A);
}

void setupServo(int servoPin) {
  //todo
}


void setupAll() {
  setupLed();
  setupMotors();
  setupServo();
}
