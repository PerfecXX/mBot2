#include "cyberpi.h"

CyberPi cyber;

bool btn_a;
bool btn_b;
bool btn_menu;

void setup()
{
    Serial.begin(115200);
    cyber.begin();
}

void loop()
{ 
    btn_a = cyber.get_button_a();
    btn_b = cyber.get_button_b();
    btn_menu = cyber.get_button_menu();

    Serial.print("Button A: ");
    Serial.print(btn_a);
    Serial.print(" | Button B: ");
    Serial.print(btn_b);
    Serial.print(" | Button MENU: ");
    Serial.println(btn_menu);
    delay(500);
}