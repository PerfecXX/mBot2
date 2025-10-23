#include "cyberpi.h"

CyberPi cyber;
Bitmap *bitmap;

int font_size = 12;
wchar_t text[] = L"Hello, CyberPi!";
uint16_t color = 0xFFFF;

void setup() {
    Serial.begin(112500);
    cyber.begin();

    cyber.clean_lcd();
    bitmap = cyber.create_text(text, color, font_size);
    cyber.set_bitmap(0, 0, bitmap);
    cyber.render_lcd();
}

void loop() 
{
  
}
