#include "cyberpi.h"

CyberPi cyber;
void setup()
{
    cyber.begin();
    cyber.set_rgb(1, 255, 0, 0); // Set RGB LED 1 to red
    cyber.set_rgb(2, 0, 255, 0); // Set RGB LED 2 to green
    cyber.set_rgb(3, 0, 0, 255); // Set RGB LED 3 to blue
    cyber.set_rgb(4, 255, 255, 0); // Set RGB LED 4 to yellow
    cyber.set_rgb(5, 0, 255, 255); // Set RGB LED 5 to cyan
}

void loop()
{ 
}