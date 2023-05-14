
// Cpp prog for Drawing eclipse using Trigonometric method

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


for(theta=0;theta<=90;theta ++)
{

        x1=a*cos(theta*pi);
        y1=b*sin(theta*pi);
        x=int(x1+0.5);
        y=int(y1+0.5);
        putpixel(x+h,y+k,WHITE);
        putpixel(x+h,-y+k,WHITE);
        putpixel(-x+h,y+k,WHITE);
        putpixel(-x+h,-y+k,WHITE);

        delay(0.5);
}

	getch();

	closegraph();


}

