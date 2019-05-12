/* Include of the Arduino extension of cpp so we can
 * use methods like pinmode() or digitalWrite().
*/

#include "Arduino.h"

/* We include a .h file,
 * which contains all the pins and functions what we use here.
 * When using it we and our end-users can just call simple pin name
 * and don't must worry about the pin number. The same principle
 * we use in these functions. The total purpose of this library
 * in general isn't to do something like write something on display, 
 * contact some server etc. It only does the job of initializing pins
 * and make simpler and faster the development itself. 
*/

#include "octopuslibrary.h"

// This function a test of built in led.
void led_blinking() {

  setupLed(); // Calls function that sets pin mode etc. Don't forget that one of clean code rules is that
	     //every function should do only one thing at the time. That's the reason why there is call to function.

  digitalWrite(BUILT_IN_LED, HIGH);
  delay(1500);
  digitalWrite(BUILT_IN_LED, LOW);
  delay(1500);
}

//Sets up the LED
void setupLed() {
  pinMode(BUILT_IN_LED, OUTPUT);
  digitalWrite(BUILT_IN_LED, LOW);
}

//Inicializes the motors.
void setupMotors() {
  //We don't need to use any 3. party lib if we can use digitalWrite() !
  
  pinMode(PIN_MOTOR_1A, OUTPUT);
  pinMode(PIN_MOTOR_2A, OUTPUT);
  pinMode(PIN_MOTOR_3A, OUTPUT);
  pinMode(PIN_MOTOR_4A, OUTPUT);
}

void setupServo() {
  //Include of the Arduino library for servo control.
  #include <Servo.h>

  Servo myservo;  // Creates servo object for the first servo to control a servo.
  //Up to twelve servo objects can be created on most boards.

  //We do some more for two more servo
  Servo myservo_2;
  Servo myservo_3;

  //Now we attach every single servo to pin on the board.
  myservo_1.attach(PIN_SERVO1);	
  myservo_2.attach(PIN_SERVO2);
  myservo_3.attach(PIN_SERVO3); 
}


/* This function setups all the components above.
 * It gives user option to setup all in one function call.
 * That's good for clean code and more simple code in general.
 */
void setupAll() {
  setupLed();
  setupMotors();
  setupServo();
}
