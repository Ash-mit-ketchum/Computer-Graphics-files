#include <graphics.h>
#include <stdio.h>
int main(){
int gd=DETECT, gm;
initgraph(&gd, &gm, (char*)"");
putpixel(100, 299, WHITE);
getch();
closegraph;
}
