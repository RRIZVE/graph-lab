/*C graphics program to draw a line.*/
#include <graphics.h>
#include <conio.h>
#include"math.h"

main()
{
    int gd = DETECT, gm=0;

    //init graphics
    initgraph(&gd, &gm, (char*) "");

    setbkcolor(YELLOW);

    setcolor(WHITE);
    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);

    floodfill(160,50,WHITE);
    setcolor(WHITE);

//  for flag bar
    rectangle(138,35,150,450);
    setfillstyle(1,BLUE);
    floodfill(140,40,WHITE);
    setcolor(WHITE);
    bar(130,450,160,460);
    setcolor(WHITE);

// center circle
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);
    setcolor(RED);
    getch();
    closegraph();
    return 0;
}

