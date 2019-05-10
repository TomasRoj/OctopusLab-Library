//Basic example of blinking builtin LED of the ESP32
//Include of the OctopusLab-Library

//Include
#include <octopuslibrary.h>

void setup(){
  //We call the function that initializes the LED pin
  setupLed();
}

void loop(){
  //Library includes basic blinking example
  //So no more commands are needed.
  led_blinking();
}