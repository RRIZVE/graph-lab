/*C graphics program to draw .*/
#include<bits/stdc++.h>
#include <graphics.h>




main()
{
    //Drawing B
    int x = 100;
    int y = 150;
    int start_angle = 270;
    int end_angle = 90;
    int radius = 100;
    line(100, 50, 100, 450);
    arc(x, y, start_angle, end_angle, radius);
    arc(x, y+200, start_angle, end_angle, radius);
}


