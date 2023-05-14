//Implemented by

#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    initgraph(&gd, &gm, "ID:C193070");

    cout<<"Enter the value of (x1,y1) : ";
    cin>>x1>>y1; //0,0
    cout<<"Enter the value of (x2,y2) : ";
    cin>>x2>>y2;//400,300

    int x = x1, y = y1;
    int dx = x2 - x1, dy = y2 - y1;
    int dT = 2 * (dy - dx), dS = 2 * dy;
    int d = 2 * dy - dx;

    putpixel(x, y, WHITE);
    delay(100);
    while (x < x2)
    {
        x++;
        if (d < 0)
        {
            d = d + dS;
        }
        else
        {
            y++;
            d = d + dT;
        }
        putpixel(x, y, WHITE);
        delay(100);
    }

    closegraph();
    return 0;
}
