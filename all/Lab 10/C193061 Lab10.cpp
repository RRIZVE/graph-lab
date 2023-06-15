// Liang-Barskey algorithm
//C193061
#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void liangBarsky(int x1, int y1, int x2, int y2, int xmin, int ymin, int xmax, int ymax) {
    int dx = x2 - x1, dy = y2 - y1;
    float t1 = 0, t2 = 1;

    int p[4] = {-dx, dx, -dy, dy};
    int q[4] = {x1 - xmin, xmax - x1, y1 - ymin, ymax - y1};

    for (int i = 0; i < 4; i++) {
        if (p[i] == 0 && q[i] < 0) {
            printf("Line is outside the window. No clipping required.");
            return;
        }

        float t = (float) q[i] / p[i];

        if (p[i] < 0) {
            if (t > t1) t1 = t;
        } else if (p[i] > 0) {
            if (t < t2) t2 = t;
        }
    }

    if (t1 > t2) {
        printf("Line is outside the window. No clipping required.");
        return;
    }

    int newX1 = x1 + (int) (t1 * dx);
    int newY1 = y1 + (int) (t1 * dy);
    int newX2 = x1 + (int) (t2 * dx);
    int newY2 = y1 + (int) (t2 * dy);

    setcolor(YELLOW);
    line(newX1, newY1, newX2, newY2);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 50, y1 = 50, x2 = 250, y2 = 150;
    line(x1,y1,x2,y2);
    int xmin = 100, ymin = 100, xmax = 300, ymax = 200;
    rectangle(xmin, ymin, xmax, ymax);

    delay(1000);

    liangBarsky(x1, y1, x2, y2, xmin, ymin, xmax, ymax);

    getch();
    closegraph();
    return 0;
}
