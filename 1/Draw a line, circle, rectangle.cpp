#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"\\TURBOC3\\BGI");

    line(50,50,150,50);
    circle(300,300,100);
    rectangle(100,100,250,200);

    getchar();
}
