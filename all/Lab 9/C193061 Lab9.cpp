//Cohen-Sutherland algorithm for line clipping
#include <bits/stdc++.h>
#include <conio.h>
#include <graphics.h>
using namespace std;

int xmin, ymin, xmax, ymax;

int Visible_or_not(int x, int y)
{
    int code = 0;
    if (x < xmin)   code |= 1;
    else if (x > xmax)   code |= 2;
    if (y < ymin)        code |= 4;
    else if (y > ymax)        code |= 8;
    return code;
}


int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    xmin = 100;
    ymin = 100;
    xmax = 300;
    ymax = 300;

    rectangle(xmin, ymin, xmax, ymax);

    int x0 = 20;
    int y0 = 200;
    int x1 = 400;
    int y1 = 200;

    line(x0, y0, x1, y1);

    delay(1000);


    int p1 = Visible_or_not(x0, y0);
    int p2 = Visible_or_not(x1, y1);


    if(p1!=0)
    {
        int codeOut=p1;
        int x, y;
        if (codeOut & 8)
        {
            x = x0 + (x1 - x0) * (ymax - y0) / (y1 - y0);
            y = ymax;
        }
        else if (codeOut & 4)
        {
            x = x0 + (x1 - x0) * (ymin - y0) / (y1 - y0);
            y = ymin;
        }
        else if (codeOut & 2)
        {
            y = y0 + (y1 - y0) * (xmax - x0) / (x1 - x0);
            x = xmax;
        }
        else
        {
            y = y0 + (y1 - y0) * (xmin - x0) / (x1 - x0);
            x = xmin;
        }
        setcolor(BLACK);
        line(x0, y0, x, y);
        putpixel(x,y,WHITE);
    }

    delay(1000);

    if(p2!=0)
    {
        int codeOut=p2,x,y;
        if (codeOut & 8)
        {
            x = x0 + (x1 - x0) * (ymax - y0) / (y1 - y0);
            y = ymax;
        }
        else if (codeOut &4 )
        {
            x = x0 + (x1 - x0) * (ymin - y0) / (y1 - y0);
            y = ymin;
        }
        else if (codeOut & 2)
        {
            y = y0 + (y1 - y0) * (xmax - x0) / (x1 - x0);
            x = xmax;
        }
        else
        {
            y = y0 + (y1 - y0) * (xmin - x0) / (x1 - x0);
            x = xmin;
        }
        setcolor(BLACK);
        line(x1, y1, x, y);
        putpixel(x,y,WHITE);

    }



    getch();
    closegraph();
    return 0;
}
