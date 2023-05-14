#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1,x2,y1,y2,m,dx,dy,p;
    initgraph(&gd,&gm,"C193070 ");
    cout<<"Enter the number of x1,y1 :   ";
    cin>>x1>>y1;
    cout<<"Enter the number of x2,y2 :   ";
    cin>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    m=dx/dy;
    p=2*dy-dx;
    while(x1<x2)
    {
            if(p<0)
            {
                putpixel(x1,y1,RED);
                delay(1000);
                x1=x1+1;
                y1=y1;
                p=p+2*dy;
            }
            else
            {
                putpixel(x1,y1,RED);
                delay(100);
                x1=x1+1;
                y1=y1+1;
                p=p+2*dy-2*dx;
            }

    }

    closegraph();
}
