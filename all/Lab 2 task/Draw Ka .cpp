
/*C graphics program to draw a Ka.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
// x1, y1 , x2, y2
    setcolor(GREEN);
    line(50,50,450,50);
    line(250,50,190,150);

    line(190,150,250,250);
    line(250,50,250,250);
    arc(138,150,360,40,150);
    circle(277,150,10);
    getch();
    closegraph();
    return 0;
}


