

// Cpp prog for ARC

#include<bits/stdc++.h>
#include <graphics.h>

using namespace std;
int main()
{
	int gd = DETECT, gm;

	initgraph(&gd, &gm, "");


	arc(300,300, 180,270,50);

	getch();

	closegraph();

	return 0;
}
