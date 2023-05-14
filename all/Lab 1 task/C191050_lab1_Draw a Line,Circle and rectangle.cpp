/*C graphics program to draw a line.*/

#include <graphics.h>
#include <conio.h>



main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");



    line(295,40,70,40);    //will draw a horizontal line
    circle(150,130,60);  // circle x, y , radius

    printf("\n");
// rectangle left top right bottom

    rectangle(150, 240, 400,350);



    getch();
    closegraph();
    return 0;
}

