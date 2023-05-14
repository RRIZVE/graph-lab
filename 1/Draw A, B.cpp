#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"\\TURBOC3\\BGI");

     line(100,20,50,100);
     line(100,20,150,100);
     line(75,50,125,50);


     line(50,105,50,163);
     arc(50,120,-90,90,15);
     arc(50,150,-90,90,15);

    getchar();
}
