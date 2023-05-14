#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"\\TURBOC3\\BGI");

   line(50,400,650,400);
   line(100,400,300,50);
   line(600,400,300,50);
   line(300,50,300,400);
   line(300,50,200,400);
   line(300,50,400,400);
   line(300,50,500,400);

   setcolor(GREEN);
   rectangle(50,50,220,150);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill(51,51,GREEN);

    setcolor(RED);
   circle(130,100,30);
   setfillstyle(SOLID_FILL,RED);
   floodfill(131,101,RED);
   line(50,45,50,400);

    getchar();
}

