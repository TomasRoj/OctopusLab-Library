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

// Code for other methods are included in their own files.

#include "octopuslibrary.h"

//Base class

void OctopusLibrary::led_blinking() {

    pinMode(2, OUTPUT);

    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    delay(1000);

}

void OctopusLibrary::thermometer() {
  //All the libraries
  #include <OneWire.h>
  #include <DallasTemperature.h>
  #define ONE_WIRE_BUS 32

  // Setup a oneWire instance to communicate with any OneWire device
  OneWire oneWire(ONE_WIRE_BUS);	

  // Pass oneWire reference to DallasTemperature library
  DallasTemperature sensors(&oneWire);

  // Prints the temperature
  sensors.requestTemperatures();
  const int temperature = sensors.getTempCByIndex(0);

  return temperature;

}
