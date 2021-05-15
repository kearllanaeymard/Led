#include "Led.h"
Led::Led(byte pin) {
  tmpPin = pin;
  pinMode(tmpPin, OUTPUT);
  off();
}
void Led::on() {
  digitalWrite(tmpPin, HIGH);
}
void Led::off() {
  digitalWrite(tmpPin, LOW);
}


