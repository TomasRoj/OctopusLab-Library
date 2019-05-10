[![Build Status](https://travis-ci.com/TomasRoj/OctopusLab-Library.svg?branch=master)](https://travis-ci.com/TomasRoj/OctopusLab-Library) [![Coverage Status](https://coveralls.io/repos/github/TomasRoj/OctopusLab-Library/badge.svg?branch=master)](https://coveralls.io/github/TomasRoj/OctopusLab-Library?branch=master)


# OctopusLab-Library 🐙

Arduino library for @octopusengine that makes it easier to work with pins on their boards 🎉🔥

Czech version follows.

!!! This Library is currently in heavy development and not tested fully yet. We don't recommend using this library in production !!!

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

To use this library, please install it via Arduino Library Manager (not available yet) and make
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

# Czech Version

## Jak to funguje

Tato knihovna ulehčuje práci s piny na deskách od OctopusLab. Pokud připojíš knihovnu ke svému projektu, definuje a inicializuje všchny piny a ty se můžeš soustředit na samotný kód. Pro seznam všech pinů, se prosím podívej do sekce Piny & Podpora. Knihovna také nabízí základní nastavení pinů. Všchny možné funkce, se nachází v sekci funkce().

## Piny & Podpora

Momentálně je podporována jen deska RobotBoard! Piny níže nebudou fungovat na ostatních deskách!

Motor č.1 - MOTOR1
Motor č.2 - MOTOR2
Motor č.3 - MOTOR3
Motor č.4 - MOTOR4

Zabudovaná LED dioda - led

Servo č.1 - SERVO1
Servo č.2 - SERVO2
Servo č.3 - SERVO3

## Funkce()

setupLed()
led_blinking() - Rozbliká diodu.
setupMotors()
setupServo()
setupAll() - Inicializuje všchny možné komponenty desky

## Jak, tohle použít ⁉

Stáhni si totu knihovnu z manažeru knihoven v Arduino IDE (momentálně nedostupné) a vytvoř instanci knihovny (octopuslibrary instance() ).

Potom jen zavolej jednu z funkcí a jsi ready! 😊

## Příspěvek do vývoje knihovny

Jsme hrdí, že lidi jako jsi ty pomáhají vytvářet lepší budoucnost elektroniky.
Jako ostatní projekty, má i tento repo záložku ISSUES, kde najdeě aktuální problémy s tímto projektem.
Respektuj ale prosím všechna pravidla, která jsou napsaná v CODE_OF_CONDUCT.md souboru, k prevenci špatných věcí 🙌. Pokud nevíš, kde začít prosím navštiv záložku ISSUES. Díky!

Vytvořeno Tomášem Rojem a týmem OctopusEngine v roce 2019. 📅
Tento a další moje projekty jsou k dispozici pod open-source licencí MIT. Navštiv soubor LICENSE, pro více INFO.
