#include<bits/stdc++.h>
#include <graphics.h>
using namespace std;

void sect(int h, int k, int r )
{
    int x,y,s,g;
    x=s=0;
    y=g=r;
    while(x<=y)
    {
        putpixel(x+h, y+k,RED);
        x++;
        y=sqrt((r*r)-(x*x));
    }
    setcolor(RED);
    line( h,k,x+h, y+k);
    line( h,k, s+h,g+k);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    sect(150, 150,   105);
    getch();
    closegraph();
    return 0;
}
