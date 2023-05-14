#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;
#define pi acos(-1.0)

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(250,100,250,300);
    line(250,300,450,300);

    int x=50,y=100,h=250,k=300;

    double thita =60;
    thita = (thita*pi)/180;

    int x_prime = (x*cos(thita)) - (y*sin(thita));
    int y_prime = (x*sin(thita)) + (y*(cos(thita)));

    circle(h+x,k-y,5);
    circle(h+x_prime,k-y_prime,5);

    getch();
    closegraph();
    return 0;
}
