#include<graphics.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"\\TURBOC3\\BGI");

    circle(100,150,90);
    ellipse(120,120,0,360,10,20);
    circle(100,160,10);
    ellipse(80,120,0,360,10,20);
    arc(100,180,180,0,30);
    getchar();
}
