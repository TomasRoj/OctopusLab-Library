//Basic example of blinking builtin LED of the ESP32
//Include and creation of instance of the OctopusLab-Library

//Include
#include <octopuslibrary.h>


<<<<<<< HEAD
void setup(){
    //We call the function that initializes the LED pin
    setupLed();
}

void loop(){
    //Library includes basic blinking example
    //So no more commands are needed.
    led_blinking();
}
=======
void setup() {
  //We call the function that initializes the LED pin
  lib.setupLed();
}

void loop() {
  //Library includes basic blinking example
  //So no more commands are needed.
  lib.led_blinking();
}
>>>>>>> d40b666ada499ba4d4f1409913247405925666ba
