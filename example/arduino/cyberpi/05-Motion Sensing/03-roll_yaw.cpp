#include "cyberpi.h"

CyberPi cyber;

float roll;
float pitch;

void setup()
{
    Serial.begin(115200);
    cyber.begin();
}

void loop()
{    
    roll = cyber.get_roll();
    pitch = cyber.get_pitch();

    Serial.print("Roll: ");
    Serial.print(roll);
    Serial.print("  Pitch: ");
    Serial.println(pitch);
    delay(25);
}
