#include "cyberpi.h"

CyberPi cyber;
int loudness;

void setup() {
    Serial.begin(112500);
    cyber.begin();
}

void loop() 
{
    loudness = cyber.get_loudness();
    Serial.print("loudness: ");
    Serial.println(loudness);
    delay(200);
}