// esp32_pin_verification.ino

#include <Arduino.h>

const int numPins = 16; // Adjust based on the number of GPIO pins used
int pins[numPins] = {0, 1, 2, 3, 4, 5, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22}; // Example GPIO pins

void setup() {
    Serial.begin(115200);
    for (int i = 0; i < numPins; i++) {
        pinMode(pins[i], OUTPUT);
    }
    Serial.println("Starting GPIO verification...");
}

void loop() {
    for (int i = 0; i < numPins; i++) {
        digitalWrite(pins[i], HIGH);
        Serial.print("Pin ");
        Serial.print(pins[i]);
        Serial.println(" is HIGH");
        delay(1000); // Hold HIGH for 1 second
        digitalWrite(pins[i], LOW);
        Serial.print("Pin ");
        Serial.print(pins[i]);
        Serial.println(" is LOW");
        delay(1000); // Hold LOW for 1 second
    }
}
