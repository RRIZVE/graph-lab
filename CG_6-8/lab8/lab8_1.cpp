#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // original point
    int original_x = 100;
    int original_y = 100;
    circle(original_x, original_y, 3);

    // scaling factors
    float scale_factor_x = 2.0;
    float scale_factor_y = 1.5;

    // calculate scaled point
    int scaled_x = original_x * scale_factor_x;
    int scaled_y = original_y * scale_factor_y;
    circle(scaled_x, scaled_y, 3);

   getch();
    closegraph();
    return 0;
}
