#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(){

    int gd= DETECT, gm;
    initgraph(&gd, &gm, "");

    int x1=100, y1=200, x2=300, y2=450;
    int dx= x2-x1;
    int dy= y2-y1;
    float xinc, yinc;
    int steps;

    if (abs(dx) > abs(dy)){
        steps= abs(dx);
        xinc= (float)(dx)/steps;
        yinc= (float)(dy)/steps;
    } else {
        steps= abs(dy);
        xinc= (float)(dx)/steps;
        yinc= (float)(dy)/steps;
    }

    float x=x1, y=y1;

   for (int i=0; i<=steps; i++){
    x+=xinc;
    y+=yinc;
    putpixel(x, y, WHITE);
   }

    getch();
    closegraph();
}
