#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    Serial.println("Ahoj");
    while (!Serial) {
        ; // wait for serial port to connect. Needed for Leonardo only
    }
}

void loop() {
    Serial.println("Ahoj");
}