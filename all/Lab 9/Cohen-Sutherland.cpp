#include <bits/stdc++.h>
#include <conio.h>
#include <graphics.h>
using namespace std;

#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

int xmin, ymin, xmax, ymax;
int draw(int x, int y)
{
    int code = 0;
    if (x < xmin)
    {
        code |= LEFT;
    }
    else if (x > xmax)
    {
        code |= RIGHT;
    }
    if (y < ymin)
    {
        code |= BOTTOM;
    }
    else if (y > ymax)
    {
        code |= TOP;
    }
    return code;
}
void cohenSutherland_algo(int x0, int y0, int x1, int y1)
{
    int code0 = draw(x0, y0);
    int code1 = draw(x1, y1);
    int accept = 0;

    while (1)
    {
        if ((code0 | code1)==0)
        {
            accept = 1;
            break;
        }
        else if (code0 & code1)
        {
            break;
        }
        else
        {
            int codeOut;
            int x, y;
            if (code0)
            {
                codeOut = code0;
            }
            else
            {
                codeOut = code1;
            }
            if (codeOut & TOP)
            {
                x = x0 + (x1 - x0) * (ymax - y0) / (y1 - y0);
                y = ymax;
            }
            else if (codeOut & BOTTOM)
            {
                x = x0 + (x1 - x0) * (ymin - y0) / (y1 - y0);
                y = ymin;
            }
            else if (codeOut & RIGHT)
            {
                y = y0 + (y1 - y0) * (xmax - x0) / (x1 - x0);
                x = xmax;
            }
            else
            {
                y = y0 + (y1 - y0) * (xmin - x0) / (x1 - x0);
                x = xmin;
            }

            if (codeOut == code0)
            {
                setcolor(BLACK);
                line(x0, y0, x, y);
                putpixel(x,y,WHITE);
                x0 = x;
                y0 = y;
                code0 = draw(x0, y0);
            }
            else
            {
                setcolor(BLACK);
                line(x1, y1, x, y);
                putpixel(x,y,WHITE);
                x1 = x;
                y1 = y;
                code1 = draw(x1, y1);
            }
        }
    }
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    cout << "Enter the size of window : ";

    cin >> xmin >> ymin >> xmax>>ymax;//100 100 200 200

    rectangle(xmin, ymin, xmax, ymax);
    int x1,y1,x2,y2;
    cout << "Enter the size of line : ";
    cin >> x1>>y1>>x2>>y2;// 110 110 190 190
    line(x1, y1, x2, y2);
    int n;
    cin>>n;
    cohenSutherland_algo(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
