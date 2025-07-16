#include <stdio.h>
#include <graphics.h>
int main(){
int gd= DETECT, gm;
initgraph (&gd, &gm, "");
int x1=100, y1=100, x2=500;
for (int x=x1; x<=x2; x++){
    putpixel(x, y1, WHITE);
}
getch();
closegraph;
}
