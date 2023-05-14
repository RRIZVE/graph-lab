#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    int x1=200,y1=200,x2=400,y2=400;
    float step,xn,yn,dx,dy,m;
    initgraph(&gd,&gm," ");
    //<<"Enter the staring coordinates  \n" ;
    //cout<<"X1= ";
    //cin>>x1;
    //cout<<"Y1=";
   // cin>>y1;
    //cout<<"Enter the end coordinates \n";
     //cout<<"X2= ";
    //cin>>x2;
   // cout<<"Y2=";
    //cin>>y2;
    dx=x2-x1;
    dy=y2-y1;
    m=dy/dx;
    if(m<=1)
    {
       for(int i=0;i<=x2;i++)
       {
           x1=x1+1;
           y1=y1+m;
           putpixel(x1,y1,RED);
           delay(100);
       }
    }
    if(m>1)
    {
         for(int i=0;i<=y2;i++)
       {
           x1=x1+(1/m);
           y1=y1+1;
           putpixel(x1,y1,RED);
           delay(100);
       }
    }
}
