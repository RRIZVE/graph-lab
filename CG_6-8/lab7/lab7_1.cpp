#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

// define a struct to represent a point in 2D space
struct Point {
    int x;
    int y;
};

// function to rotate a point about the origin by a given angle in radians
void rotatePoint(Point& p, double angle) {
    int x = p.x * cos(angle) - p.y * sin(angle);
    int y = p.x * sin(angle) + p.y * cos(angle);
    p.x = x;
    p.y = y;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // create a point and display its coordinates
    Point p = {100, 100};
    circle(p.x, p.y, 5); // draw the original point
    outtextxy(p.x + 10, p.y, "Original point");

    // rotate the point by 45 degrees and display its new coordinates
    double angle = 45 * M_PI / 180; // convert degrees to radians
    rotatePoint(p, angle);
    circle(p.x, p.y, 5); // draw the rotated point
    outtextxy(p.x + 10, p.y, "Rotated point");

    getch();
    closegraph();
    return 0;
}
