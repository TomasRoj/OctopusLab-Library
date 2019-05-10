# ESP32 examples

## About

This section of the examples folder includes some basic examples that work on ESP32. It's currently the main board what we use on our modules. Every example includes comments so you should understand everything just fine.

## How to install ESP32 support to the Arduino IDE

In default, ESP32 support is not in Arduino IDE. If you want to develop some code for this chip you need to manually add support to the IDE. But don't worry! This process is very easy and it will take more than 10 minutes. So how to do it?

1. Open Arduino IDE and go to file > preferences.
2. Now you should see window with an URL address field.
3. Click into this field and copy & paste this URL address: https://dl.espressif.com/dl/package_esp32_index.json, http://arduino.esp8266.com/stable/package_esp8266com_index.json . This will install ESP32 and ESP8266 into IDE.
4. Click OK button.
5. Now go Tools > Boards > Boards manager
6. Search for the ESP32 by Espressif Systems and click the install button. Eventually you can find esp8266 and install it too.
7. this will take a while, but after that, you are ready to use the ESP32 and ESP8266 in your project!

### Help us

Fork and test the examples here. We are trying to fix all known bugs in our example but you know, time is everything :-D.31
