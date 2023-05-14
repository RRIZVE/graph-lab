/*C graphics program to draw a line.*/

#include<bits/stdc++.h>
#include <graphics.h>
#include <conio.h>

FloodFill (int x, int y, int new_col, int old_col)
{

	if (getpixel(x, y) == old_col) {

		// put new pixel with new color
		putpixel(x, y, new_col);

		// for bottom pixel fill
		FloodFill(x + 1, y, new_col, old_col);

		//  for top pixel fill
		FloodFill(x - 1, y, new_col, old_col);

		//for right pixel fill
		FloodFill(x, y + 1, new_col, old_col);

		//   for left pixel fill
		FloodFill(x, y - 1, new_col, old_col);
	}
}

int main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");
	int top, left, bottom, right;

	top = left = 50;
	bottom = right = 300;


	rectangle(left, top, right, bottom);


	int x = 51;
	int y = 51;

	// new color to fill
	int newcolor = 5;


	int oldcolor = 0;

	// call for fill rectangle
	FloodFill(x, y, newcolor, oldcolor);
    getch();
    closegraph();
    return 0;
}
