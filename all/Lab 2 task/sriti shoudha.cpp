
#include <graphics.h>
#include <conio.h>



main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");

      line(320  ,50,290 ,250 );
    line(  320 ,50,360 ,250);
  line(315, 70, 195, 250);
//   line(200, 200, 600, 600);

    getch();
    closegraph();

}
