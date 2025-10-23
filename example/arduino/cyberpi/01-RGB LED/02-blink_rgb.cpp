#include "cyberpi.h"

CyberPi cyber;
void setup()
{
    cyber.begin();
}

void loop()
{ 
    cyber.set_rgb(0, 255, 0, 0); // Set RGB LED 1 to red
    cyber.set_rgb(1, 0, 255, 0); // Set RGB LED 2 to green
    cyber.set_rgb(2, 0, 0, 255); // Set RGB LED 3 to blue
    cyber.set_rgb(3, 255, 255, 0); // Set RGB LED 4 to yellow
    cyber.set_rgb(4, 0, 255, 255); // Set RGB LED 5 to cyan
    delay(1000); // Wait for 1 second
    cyber.set_rgb(0, 0, 0, 0); // Turn off RGB LED 1
    cyber.set_rgb(1, 0, 0, 0); // Turn off RGB LED 2
    cyber.set_rgb(2, 0, 0, 0); // Turn off RGB LED 3
    cyber.set_rgb(3, 0, 0, 0); // Turn off RGB LED 4
    cyber.set_rgb(4, 0, 0, 0); // Turn off RGB LED 5
    delay(1000); // Wait for 1 second
}