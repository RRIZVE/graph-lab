#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x,y,x1,y1,a,b,h,k,theta;
    float pi=3.14159/180;
    h=250,k=200;
    a=100, b=55;
    x=0;
    y=b;
    while(x<=a)
    {
        putpixel(x+h,y+k,GREEN);
        putpixel(x+h,-y+k,GREEN);
        putpixel(-x+h,y+k,GREEN);
        putpixel(-x+h,-y+k,GREEN);
        x++;
        y=b*sqrt(((a*a)-(x*x*1.0))/(a*a));
    }
    getch();
    closegraph();
}

