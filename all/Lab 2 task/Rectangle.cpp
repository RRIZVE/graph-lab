
/*C graphics program to draw a Rectangle.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");

// rectangle left top right bottom

    rectangle(150, 240, 400,350);



    getch();
    closegraph();
    return 0;
}
