/*C graphics program to draw a line.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");

    circle(230,200,90);


    getch();
    closegraph();
    return 0;
}

