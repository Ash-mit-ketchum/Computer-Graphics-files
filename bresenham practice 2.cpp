#include <stdio.h>
#include <graphics.h>

int main(){

int gd= DETECT, gm;
initgraph(&gd, &gm, "");

int x1=100, y1=100, x2=300, y2=200;
int dx=x2-x1;
int dy= y2-y1;
int pOld=2*dy-dx;
int Pnew;
int x=x1;
int y=y1;


for (int i=0; i<=dx; i++){

    if (pOld<0){
        x+=1;
        Pnew= pOld+2*dy;
    } else {
        x+=1;
        y+=1;
        Pnew= pOld+2*dy-2*dx;
    }
    putpixel(x, y, WHITE);
}

getch();
closegraph();

}
