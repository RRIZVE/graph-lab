#include <iostream>
#include <graphics.h>
#include <cmath>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x0 = 300; // x-coordinate of center
    int y0 = 200; // y-coordinate of center
    int r = 100; // radius

    for(int i = 0; i < 360; i++) {
        int x = x0 + r*cos(i*M_PI/180);
        int y = y0 + r*sin(i*M_PI/180);
        putpixel(x, y, WHITE);
    }

    getch();
    closegraph();
    return 0;
}

