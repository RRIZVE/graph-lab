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

// function to rotate a line about a point by a given angle in radians
void rotateLine(Point& p1, Point& p2, const Point& center, double angle) {
    // rotate both points about the center point
    rotatePoint(p1, center, angle);
    rotatePoint(p2, center, angle);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // create the line and the center point to rotate about
    Point center = {100, 100};
    Point p1 = {50, 50};
    Point p2 = {150, 150};
    line(p1.x, p1.y, p2.x, p2.y); // draw the original line
    circle(center.x, center.y, 5); // draw the center point

    // rotate the line by 45 degrees about the center point and display it
    double angle = 45 * M_PI / 180; // convert degrees to radians
    rotateLine(p1, p2, center, angle);
    line(p1.x, p1.y, p2.x, p2.y); // draw the rotated line

    getch();
    closegraph();
    return 0;
}
