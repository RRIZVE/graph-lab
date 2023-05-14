
/*C graphics program to draw a Sohid minar.*/
#include <graphics.h>
#include <conio.h>
#define sf SOLID_FILL

main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");

    initwindow(1000,680);

    int page = 0;
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,2);
    rectangle(600,450,950,460);
    floodfill(605,455,WHITE);
    rectangle(590,460,960,470);
    floodfill(595,465,WHITE);
    rectangle(575,470,970,480);
    floodfill(585,475,WHITE);

//1st minar

    rectangle(610,350,645,450);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(620,360,635,450);
    floodfill(620,353,WHITE);

//2nd

    rectangle(675,325,715,450);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(685,335,705,450);
    floodfill(680,327,WHITE);
//3rd
    rectangle(740, 300, 750,450);
    setfillstyle (SOLID_FILL, WHITE);
    floodfill (745,307, WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(770,300,780,450);
    floodfill(775,307,WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(800, 300,810,450);
    floodfill(805,307,WHITE);
    setcolor (WHITE);

//1st upper
    line (740,300,785,240);
    line (741,300,785,241);
    line (742,300,785,242);
    line (743,300,785,243);
    line (744,300,785,244);
    line (745,300,785,245);
    line (746,300,785,246);
    line (747,300,785,247);
    line (748,300,785,248);
    line (749,300,785,249);
    line (750,300,785,250);
    line (751,300,785,251);


    //3rd side

    line (810,300,855,240);
    line(800,300,835,253);
    line (800,300,845,240);
    line (801,300,846, 240);
    line (802,300,847, 240) ;
    line (803,300,848, 240);
    line (804, 300,849, 240);
    line (805,300, 850,240);
    line (806,300,851,240);
    line (807,300,852,240);
    line (808,300,853,240);
    line (809,300,854,240);
    line (810, 300,855,240);

//2nd side
    line (770,300,805,253);
    line (771,300,806,253);
    line (772,300,807,253);
    line (773,300,808,253);
    line (774,300,809,253);
    line (775,300,810,253);
    line (776,300,811,253);
    line (777,300,812,253);
    line (778,300,813,253);


//upper side all 1st

    line (785,240,855,240);
    line (786,241,845,241);
    line (786,242,846,242);
    line (786,243,847,243);
    line (786,244,848,244);
    line (786,245,849,245);
    line (786,246,850,246);
    line (786,247,851,247);

    line (786,247,850,247);
    line (786,248,849,248);
    line (786,249,848,249);
    line (786,250,847,250);
    line (786,251,846,251);
    line (786,252,845,252);

    //joint size
    line(785,253,805,253);
    line(815,253,835,253);

    //circle
    setcolor(RED);
    setfillstyle(SOLID_FILL,RED);
    circle(775,375,50);
    floodfill(775,375,RED);
    //4th minar

    setcolor(WHITE);
    rectangle(835,325,875,450);
    setfillstyle(sf,WHITE);
    rectangle(845,335,865,450);
    floodfill(845,327,WHITE);
//5th minar

    setcolor(WHITE);
    rectangle(900,350,940,450);
    setfillstyle(sf,WHITE);
    rectangle(910,360,930,450);
    floodfill(910,353,WHITE);


    getch();
    closegraph();
    return 0;
}
