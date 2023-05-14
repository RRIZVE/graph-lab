/*C graphics program to draw a B.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;
    //init graphics
    initgraph(&gd, &gm, (char*) "");
// x1, y1 , x2, y2
    setcolor(GREEN);
    line(95,30,95,310);
    arc(98,100,270,90,70);
    arc(98,240,270,90,70);
    getch();
    closegraph();
    return 0;
}


