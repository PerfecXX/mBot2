#include "cyberpi.h"

CyberPi cyber;

float acc_x;
float acc_y;
float acc_z;

void setup()
{
    Serial.begin(115200);
    cyber.begin();
}

void loop()
{    
    acc_x = cyber.get_acc_x();
    acc_y = cyber.get_acc_y();
    acc_z = cyber.get_acc_z();

    Serial.print("Acc X: ");
    Serial.print(acc_x);
    Serial.print("  Acc Y: ");
    Serial.print(acc_y);
    Serial.print("  Acc Z: ");
    Serial.println(acc_z);
    delay(25);
}
