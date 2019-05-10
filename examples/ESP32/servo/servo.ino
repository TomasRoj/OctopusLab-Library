//Servo control example on ESP32

//Include library
#include <octopuslibrary.h>

//We don't need to import ESP32
//Servo library because library itself contains
//all the required setup

//Creates instance of library
octopuslibrary lib()

//Current position of servo
int pos = 0;

void setup() {
  lib.setupServo();
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
