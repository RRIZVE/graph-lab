#include <graphics.h>
#include <iostream>
using namespace std;

void floodFill(int x, int y, int oldColor, int newColor) {
    // get the current color of the pixel
    int currentColor = getpixel(x, y);
    // check if the current color is the old color and not already filled with the new color
    if (currentColor == oldColor && currentColor != newColor) {
        // fill the pixel with the new color
        putpixel(x, y, newColor);
        // recursively flood fill the adjacent pixels
        floodFill(x + 1, y, oldColor, newColor);
        floodFill(x - 1, y, oldColor, newColor);
        floodFill(x, y + 1, oldColor, newColor);
        floodFill(x, y - 1, oldColor, newColor);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // draw a rectangle with a border color of WHITE
    rectangle(50, 50, 250, 150);
    setcolor(WHITE);

    // flood fill the rectangle with a color of BLUE
    floodFill(100, 100, BLACK, BLUE);

    getch();
    closegraph();
    return 0;
}

