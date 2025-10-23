#include "cyberpi.h"

CyberPi cyber;

uint16_t light_val;

void setup()
{
    Serial.begin(115200);
    cyber.begin();
}

void loop()
{
    light_val = cyber.get_light();

    Serial.print("light:");
    Serial.println(light_val);
    delay(500);
}