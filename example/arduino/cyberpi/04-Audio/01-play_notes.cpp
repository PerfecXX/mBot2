#include "cyberpi.h"

CyberPi cyber;

// Middle Octave (Octave 4: C4, D4, E4, F4, G4, A4, B4)
int mo[7] = {60,62,64,65,67,69,71}; 

void setup() 
{
    Serial.begin(112500);
    delay(1000);
    cyber.begin();
    
    // 0 (Acoustic Grand Piano)
    cyber.set_instrument(0);
    
    int idx = 0;
    
    // Middle Octave (7 notes)
    while(idx<7)
    {
        cyber.set_pitch(0,mo[idx],100);
        delay(600);
        idx++;
    }
}

void loop() 
{
    
}
