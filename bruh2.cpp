#include <stdio.h>
#include <graphics.h>
int main(){
int gd=DETECT, gm;
initgraph(&gd, &gm, "");

int xc=200, yc=200;
int x=0, r=100;
int y=r;
int p=1-r;

while(x<=y){
    x++;
    if(p<0){
        p=p+2*x+1;
    } else {
        y--;
        p=p+2*x-2*y+1;
    }
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
}


getch();
closegraph();
}
