#include <graphics.h>
#include <iostream>
using namespace std;

void drawChar(int x, int y, char c) {
    // define the bitmap font for each character
    int font[8][8] = {
        {0,0,1,1,1,0,0,0},
        {0,1,0,0,0,1,0,0},
        {0,1,0,0,0,1,0,0},
        {0,1,0,0,0,1,0,0},
        {0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0}
    };
    // set the color to black
    setcolor(YELLOW);
    // draw the bitmap font for the character at (x,y)
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (font[i][j] == 1) {
                putpixel(x+j, y+i, YELLOW);
            }
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // display a string using the bitmap font
    string text = "HELLO";
    int x = 150, y = 150;
    for (int i = 0; i < text.length(); i++) {
        drawChar(x, y, text[i]);
        x += 8; // increment the x position by 8 for each character
    }

    getch();
    closegraph();
    return 0;
}

