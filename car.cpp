#include <graphics.h>
#include <conio.h>
#include <direct.h>

void dhanno(int x) {
    line(50 + x, 150, 300 + x, 150);
    line(50 + x, 150, 50 + x, 50);
    line(50 + x, 50, 200 + x, 50);
    line(200 + x, 50, 300 + x, 100);
    line(300 + x, 100, 300 + x, 150);
    line(300 + x, 100, 200 + x, 100);
    line(200 + x, 50, 200 + x, 150);
    line(170 + x, 50, 170 + x, 150);
    line(50 + x, 100, 170 + x, 100);

    circle(250 + x, 150, 25);
    circle(100 + x, 150, 25);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    for (int i = 0; i <= 500; i++) {
        cleardevice();
        dhanno(i);
        delay(10);
    }
X
    getch();
    closegraph();
    return 0;
}
