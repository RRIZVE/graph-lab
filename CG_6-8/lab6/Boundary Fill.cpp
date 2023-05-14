#include <graphics.h>
#include <iostream>
using namespace std;

void boundaryFill(int x, int y, int fill_color, int boundary_color) {
    // get the current color of the pixel
    int current_color = getpixel(x, y);
    // check if the current color is not the boundary color or the fill color
    if (current_color != boundary_color && current_color != fill_color) {
        // fill the pixel with the fill color
        putpixel(x, y, fill_color);
        // recursively fill the adjacent pixels
        boundaryFill(x + 1, y, fill_color, boundary_color);
        boundaryFill(x - 1, y, fill_color, boundary_color);
        boundaryFill(x, y + 1, fill_color, boundary_color);
        boundaryFill(x, y - 1, fill_color, boundary_color);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // draw a rectangle with a border color of WHITE
    rectangle(50, 50, 250, 150);
    setcolor(WHITE);

    // fill the interior of the rectangle with a color of BLUE
    boundaryFill(100, 100, RED, WHITE);

    getch();
    closegraph();
    return 0;
}

