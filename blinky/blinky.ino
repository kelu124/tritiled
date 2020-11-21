/* Low Power ATtiny402

   David Johnson-Davies - www.technoblogy.com - 15th October 2019
   ATtiny402 @ 5 MHz (internal oscillator; BOD disabled)

   CC BY 4.0
   Licensed under a Creative Commons Attribution 4.0 International license:
   http://creativecommons.org/licenses/by/4.0/
*/

#include <avr/sleep.h>

// Arduino pins
const int Speaker = 0;              // PA6 piezo speaker pin
const int Lamp = 3;                 // PA2 LED pin
const int Button = 4;               // PA3 pushbutton
const int Unused2 = 2;              // PA1
const int Unused3 = 1;              // PA7
const int Unused5 = 5;              // PA0/UPDI


// Main loop **********************************************

void setup() {
  pinMode(Speaker, OUTPUT);
  pinMode(Button, INPUT_PULLUP);
  pinMode(Lamp, INPUT_PULLUP);
  pinMode(Unused2, INPUT_PULLUP);
  pinMode(Unused3, OUTPUT);
  pinMode(Unused5, OUTPUT);
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
}

void loop () {

  digitalWrite(Speaker, HIGH);
  digitalWrite(Unused3, HIGH);
  digitalWrite(Unused5, HIGH);
  delay(500);
  digitalWrite(Speaker, LOW);
  digitalWrite(Unused3, LOW);
  digitalWrite(Unused5, LOW);
  delay(500);

}
