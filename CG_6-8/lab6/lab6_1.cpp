#include <graphics.h>
#include <stdio.h>
using namespace std;
void flood(int x, int y, int new_col, int old_col)
{
    if (getpixel(x, y) == old_col)
    {
        putpixel(x, y, new_col);
        flood(x + 1, y, new_col, old_col);
        flood(x - 1, y, new_col, old_col);
        flood(x, y + 1, new_col, old_col);
        flood(x, y - 1, new_col, old_col);
    }
}
void flood_algo()
{
    int gd, gm = DETECT;
    initgraph(&gd, &gm, "");
    int top, left, bottom, right;
    top = left = 50;
    bottom = right = 100;
    rectangle(left, top, right, bottom);
    int x = 51;
    int y = 51;
    int newcolor = 14;
    int oldcolor = 0;
    flood(x, y, newcolor, oldcolor);
    getch();
}
void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
            getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}
void boundary_algo()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 250, y = 200, radius = 50;
    circle(x, y, radius);
    boundaryFill4(x, y, 6, 15);
    delay(10000);
    getch();
    closegraph();
}
int main()
{
    //flood_algo();
    boundary_algo();
    return 0;
}
