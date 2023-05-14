#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    int x = 250;
    int y = 250;
    int start_angle = 155;
    int end_angle = 300;
    int radius = 100;
    initgraph(&gd, &gm, "");
    arc(x, y, start_angle, end_angle, radius);
    getch();
    closegraph();
    return 0;
}
