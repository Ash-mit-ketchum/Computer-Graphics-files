#include <stdio.h>
#include <graphics.h>

int sign(int value) {
    if (value > 0) return 1;
    if (value < 0) return -1;
    return 0;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1 = 100, y1 = 100, x2 = 300, y2 = 300;
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = sign(x2 - x1);
    int sy = sign(y2 - y1);

    int steep = 0;
    if (dy > dx) {
        int temp = dx;
        dx = dy;
        dy = temp;
        steep = 1;
    }

    int err = 2 * dy - dx;

    for (int i = 0; i <= dx; i++) {
        putpixel(x1, y1, WHITE);
        if (err >= 0) {
            if (steep)
                x1 += sx;
            else
                y1 += sy;
            err -= 2 * dx;
        }

        if (steep)
            y1 += sy;
        else
            x1 += sx;

        err += 2 * dy;
    }

    getch();
    closegraph();
    return 0;
}
