//Basic example of blinking builtin led of the ESP32
//Include and creation of instance of the OctopusLab-Library

//Include
#include <octopuslibrary.h>

//Instance
octopuslibrary lib()

void setup(){
    //We call function that intialize the led pin
    lib.setupLed();
}

void loop(){
    //Library includes basic blinking example
    //So no more command needed.
    lib.led_blinking();
}