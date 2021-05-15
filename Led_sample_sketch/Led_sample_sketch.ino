#include <Led.h>
Led led1 = Led(13);

void setup(){}

void loop() {
    led1.on();
    delay(1000);
    led1.off();
    delay(1000);
}
