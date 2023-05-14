/*C graphics program to draw a colorful Text.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
    // set text style as
    // settextstyle(font, orientation, size)
    setcolor(GREEN);
    settextstyle(1, HORIZ_DIR, 30);
    outtextxy(60, 70, "Hello World");
    getch();
    closegraph();
    return 0;
}

