/*C graphics program to draw a Kha.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
// x1, y1 , x2, y2
    setcolor(GREEN);
    line(236,120,236,360);
    line(265,130,230,130);
    arc(55,168,180,360,48);
    circle(23,170,15);
//arc(98,100 ,180,270,60);
    arc(99,240,289,85,70);

    arc(167,360,360,130,70);
    getch();
    closegraph();
    return 0;
}



