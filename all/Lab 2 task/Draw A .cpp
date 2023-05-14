/*C graphics program to draw a Char A.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
// x1, y1 , x2, y2
    setcolor(GREEN);
    line(250,50,450,450);
    line(325,200,190,200);
    line(250,50,90,450);
    getch();
    closegraph();
    return 0;
}

