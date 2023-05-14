#include <graphics.h>
#include <iostream>
using namespace std;
string text = "HELLO";
int x = 50, y = 50;

void drawChar(int x, int y, char c)
{
    // set the font to OUTLINE
    settextstyle(1, HORIZ_DIR, 3);
    // set the color to black
    setcolor(YELLOW);
    // draw the character at (x,y)
    outtextxy(x, y, &c);
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // display a string using the outline font

    for (int i = 0; i < text.length(); i++)
    {
        drawChar(x, y, text[i]);
        x += 30; // increment the x position by 30 for each character
    }

    getch();
    closegraph();
    return 0;
}

