#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

// define a struct to represent a point in 2D space
struct Point {
    int x;
    int y;
};

// function to rotate a point about another point by a given angle in radians
void rotatePoint(Point& p, const Point& center, double angle) {
    // translate the point to the origin
    p.x -= center.x;
    p.y -= center.y;

    // rotate the point about the origin
    int x = p.x * cos(angle) - p.y * sin(angle);
    int y = p.x * sin(angle) + p.y * cos(angle);
    p.x = x;
    p.y = y;

    // translate the point back to its original position
    p.x += center.x;
    p.y += center.y;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // create a center point and a point to rotate
    Point center = {100, 100};
    Point p = {150, 100};
    circle(center.x, center.y, 5); // draw the center point
    outtextxy(center.x + 10, center.y, "Center point");
    circle(p.x, p.y, 5); // draw the original point
    outtextxy(p.x + 10, p.y, "Original point");

    // rotate the point by 45 degrees about the center point and display its new coordinates
    double angle = 45 * M_PI / 180; // convert degrees to radians
    rotatePoint(p, center, angle);
    circle(p.x, p.y, 5); // draw the rotated point
    outtextxy(p.x + 10, p.y, "Rotated point");

    getch();
    closegraph();
    return 0;
}
