#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // define original triangle vertices
    int original_x1 = 200, original_y1 = 200;
    int original_x2 = 150, original_y2 = 150;
    int original_x3 = 200, original_y3 = 100;

    // draw original triangle
    line(original_x1, original_y1, original_x2, original_y2);
    line(original_x2, original_y2, original_x3, original_y3);
    line(original_x3, original_y3, original_x1, original_y1);

    // calculate scaling factors
    float scale_factor_x = 2;
    float scale_factor_y = 2;

    // calculate coordinates of scaled vertices
    int scaled_x1 = original_x1 * scale_factor_x;
    int scaled_y1 = original_y1 * scale_factor_y;
    int scaled_x2 = original_x2 * scale_factor_x;
    int scaled_y2 = original_y2 * scale_factor_y;
    int scaled_x3 = original_x3 * scale_factor_x;
    int scaled_y3 = original_y3 * scale_factor_y;

    // draw scaled triangle
    line(scaled_x1, scaled_y1, scaled_x2, scaled_y2);
    line(scaled_x2, scaled_y2, scaled_x3, scaled_y3);
    line(scaled_x3, scaled_y3, scaled_x1, scaled_y1);

    getch();
    closegraph();
    return 0;
}