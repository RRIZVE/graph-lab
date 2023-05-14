#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"\\TURBOC3\\BGI");

    line(100,100,300,100);
    line(200,100,150,150);
    line(150,150,200,200);
    line(200,100,200,200);
    arc(200,120,0,90,20);



    getchar();
}
