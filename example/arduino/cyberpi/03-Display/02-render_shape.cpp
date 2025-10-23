#include "cyberpi.h"

CyberPi cyber;

uint16_t color_red = 0xF800;   
uint16_t color_green = 0x07E0; 
uint16_t color_blue = 0x001F;  

void setup() {
    
    Serial.begin(112500);
    cyber.begin();

    cyber.clean_lcd();
    
    // Horizontal Line
    int y_line = 20;
    int x_start_line = 10;
    int x_end_line = 150;
    for (int x = x_start_line; x <= x_end_line; x++) {
        cyber.set_lcd_pixel(x, y_line, color_red);
    }

    // Filled Rectangle
    int x_rect = 30;
    int y_rect = 40;
    int width_rect = 100;
    int height_rect = 30;
    for (int j = y_rect; j < y_rect + height_rect; j++) { 
        for (int i = x_rect; i < x_rect + width_rect; i++) { 
            cyber.set_lcd_pixel(i, j, color_green);
        }
    }

    // Filled Triangle
    int x_center_tri = 80;
    int y_top_tri = 80;
    int height_tri = 40;
    int max_width_tri = 80;
    
    for (int j = 0; j < height_tri; j++) {
        int current_width = (j * max_width_tri) / height_tri;
        int x_start = x_center_tri - (current_width / 2);
        
        for (int i = 0; i < current_width; i++) {
            cyber.set_lcd_pixel(x_start + i, y_top_tri + j, color_blue);
        }
    }
    cyber.render_lcd();
}

void loop() 
{
}
