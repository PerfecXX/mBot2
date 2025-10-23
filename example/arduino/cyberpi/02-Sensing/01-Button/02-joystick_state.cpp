#include "cyberpi.h"

CyberPi cyber;

int joystick_x;
int joystick_y;
bool joystick_pressed;

void setup()
{
    Serial.begin(115200);
    cyber.begin();
}

void loop()
{ 
    joystick_x = cyber.get_joystick_x();
    joystick_y = cyber.get_joystick_y();
    joystick_pressed = cyber.get_joystick_pressed();

    Serial.print("Joystick X: ");
    Serial.print(joystick_x);
    Serial.print(" Y: ");
    Serial.print(joystick_y);
    Serial.print(" Pressed: ");
    Serial.println(joystick_pressed);
    delay(500);
}