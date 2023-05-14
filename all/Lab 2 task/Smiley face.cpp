/*C graphics program to draw a face.*/
#include <graphics.h>
#include <conio.h>
main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
// x1, y1 , x2, y2

    setcolor(GREEN);
    circle(230,190,100);
//left eye
    circle(190,160,10);
//right eye
    circle(270,160,10);
// nose
    ellipse(230,200,0,360,10,20 );
    arc(230,210,210,330,51);
//     line(95,30,95,310);
//arc(98,100 ,270,90,70);
//arc(98,240 ,270,90,70);
    getch();
    closegraph();
    return 0;
}


