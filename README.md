# OctopusLab-Library 🐙

Arduino library for @octopusengine that makes it easier to work with pins on their boards 🎉🔥

See readme(cz).md for instructions in Czech.

Library is availibe to download on arduino library manager. Download - OctopusLab-Library!

## How it works

This library makes it easier to work with pins on octopus engine boards. When this library is included it defines all the pins and you
can just use them. You don't need to worry about finding the pins in documentation etc. For all the pins,
please see the Pins & Support section below. This library also includes basic setup of all the
components available. To set them up, just call a function (list of them is in the "functions()" section.

## Pins & Support

Currently only the octopus lab robotboard is supported. So pins below are for this board.
‼ This library is currently in heavy development ‼ That means even the library itself
can be a full of bugs and can't compile because we are still working on it. We will be glad if you will
help us. To do so please visit the "Contribution" section.

Motor n.1 - MOTOR1
Motor n.2 - MOTOR2
Motor n.3 - MOTOR3
Motor n.4 - MOTOR4

Built in LED - led

Servo n.1 - servo1
Servo n.2 - servo2
Servo n.3 - servo3

## Functions()

setupLed()
led_blinking() - Blink an LED diode
setupMotors()
setupServo()
setupAll() - Sets up all of the components.

## How to use this ⁉

To use this library, please install it via Arduino Library Manager - OctopusLab-Library and make
instance of the library (octopuslibrary instance() ).

Then just call one of the functions and you are ready to go! 😊

## Contribution

We are glad that people like you help to build better future of electronics projects.
Like other GitHub projects this GitHub repo has a Issues tab with current issues in this
project. But, please respect all the rules included in the CODE_OF_CONDUCT.md file to
prevent bad things here 🙌. If you don't know where to start, visit please the Issues tab.

Created by Tomas Roj and OctopusLab team in 2019. 📅
This and many other projects are available under open-source MIT license. See the LICENSE file
for more info.
