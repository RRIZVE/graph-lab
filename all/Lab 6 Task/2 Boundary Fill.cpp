/*C graphics program to draw .*/
#include<bits/stdc++.h>
#include <graphics.h>

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
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");



  circle(200,200,150);
 boundaryFill4(200,200,11,15);

  delay(1);  getch();
    closegraph();
    return 0;
}


