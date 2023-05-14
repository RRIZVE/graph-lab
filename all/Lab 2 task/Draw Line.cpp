
/*C graphics program to draw a line.*/

#include <graphics.h>
#include <conio.h>



main()
{
   int gd = DETECT, gm;

   //init graphics
   initgraph(&gd, &gm, (char*) "");



   line(225,40,50,40);    //will draw a horizontal line

   getch();
   closegraph();
   return 0;
}
