/*
    octopuslibrary. Library to help users with using Octopuslab boards with ESP32: ROBOTboard and IOTboard
    Originally created by Tomas Roj and ing. Jan Copak.
    This and other files are available under MIT license. This comment must be included in any future distribution.
*/

/*
    Other classes with their methods are included
    int other .h fies. Their methods are also there but in the .cpp file.
*/ 

#define octopuslibrary_h

/* We must include the official Arduino C++ extension so we can use
 * methods like pinMode() or digitalWrite().
*/
#include "Arduino.h"

// Base class for things what all the classes have together.
class OctopusLibrary {

    public:
        void led_blinking();
        void thermometer();
    private:
        const int VERSION = 0.1;
}
