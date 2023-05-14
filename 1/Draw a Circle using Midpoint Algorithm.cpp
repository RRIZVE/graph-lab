#include <iostream>
#include <graphics.h>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x0 = 300; // x-coordinate of center
    int y0 = 200; // y-coordinate of center
    int r = 100; // radius

    int x = 0, y = r;
    int d = 1 - r;

    while(x <= y) {
        putpixel(x0 + x, y0 + y, WHITE);
        putpixel(x0 - x, y0 + y, WHITE);
        putpixel(x0 + x, y0 - y, WHITE);
        putpixel(x0 - x, y0 - y, WHITE);
        putpixel(x0 + y, y0 + x, WHITE);
        putpixel(x0 - y, y0 + x, WHITE);
        putpixel(x0 + y, y0 - x, WHITE);
        putpixel(x0 - y, y0 - x, WHITE);

        x++;
        if(d < 0) {
            d = d + 2*x + 1;
        } else {
            y--;
            d = d + 2*(x - y) + 1;
        }
    }

    getch();
    closegraph();
    return 0;
}

