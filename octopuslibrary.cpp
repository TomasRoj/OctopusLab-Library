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

//Base class

void OctopusLibrary::led_blinking() {

    pinMode(2, OUTPUT);

    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);

}

//Robot-board

// This function a test of built in led.
void RobotBoard::led_blinking() {

  setupLed(); // Calls function that sets pin mode etc. Don't forget that one of clean code rules is that
	     //every function should do only one thing at the time. That's the reason why there is call to function.

  digitalWrite(BUILT_IN_LED, HIGH);
  delay(1500);
  digitalWrite(BUILT_IN_LED, LOW);
  delay(1500);
}

//Sets up the LED
void RobotBoard::setupLed() {
  pinMode(BUILT_IN_LED, OUTPUT);
  digitalWrite(BUILT_IN_LED, LOW);
}

//Inicializes the motors.
void RobotBoard::setupMotors() {
  //We don't need to use any 3. party lib if we can use digitalWrite() !
  
  pinMode(PIN_MOTOR_1A, OUTPUT);
  pinMode(PIN_MOTOR_2A, OUTPUT);
  pinMode(PIN_MOTOR_3A, OUTPUT);
  pinMode(PIN_MOTOR_4A, OUTPUT);
}

void RobotBoard::setupServo() {
  //todo
}


/* This function setups all the components above.
 * It gives user option to setup all in one function call.
 * That's good for clean code and more simple code in general.
 */
void RobotBoard::setupAll() {
  setupLed();
  setupMotors();
  setupServo();
}
