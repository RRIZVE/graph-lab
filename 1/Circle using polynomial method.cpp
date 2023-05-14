#include <iostream>
#include <graphics.h>
#include<math.h>

using namespace std;

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x0 = 300; // x-coordinate of center
    int y0 = 200; // y-coordinate of center
    int r = 100; // radius

    for(int x = x0 - r; x <= x0 + r; x++) {
        int y = y0 + sqrt(r*r - (x - x0)*(x - x0));
        putpixel(x, y, WHITE);
        y = y0 - sqrt(r*r - (x - x0)*(x - x0));
        putpixel(x, y, WHITE);
    }

    getch();
    closegraph();
    return 0;
}
