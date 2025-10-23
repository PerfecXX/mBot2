#include "cyberpi.h"

CyberPi cyber;

float gyro_x;
float gyro_y;
float gyro_z;

void setup()
{
    Serial.begin(115200);
    cyber.begin();
}

void loop()
{    
    gyro_x = cyber.get_gyro_x();
    gyro_y = cyber.get_gyro_y();
    gyro_z = cyber.get_gyro_z();

    Serial.print("Gyro X: ");
    Serial.print(gyro_x);
    Serial.print(" | Gyro Y: ");
    Serial.print(gyro_y);
    Serial.print(" | Gyro Z: ");
    Serial.println(gyro_z);

    delay(25);
}
