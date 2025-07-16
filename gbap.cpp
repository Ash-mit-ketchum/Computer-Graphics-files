#include <stdio.h>
#include <graphics.h>

int sign(int value) {
    if (value > 0) return 1;
    if (value < 0) return -1;
    return 0;
}

int main(){

int gd=DETECT, gm;
initgraph(&gd, &gm, "");

int x1=500, y1=500, x2=100, y2=100;
int dx=abs(x2-x1);
int dy=abs(y2-y1);
int Pold= 2*dy-dx;
int x=x1, y=y1;
int sx = sign(x2-x1);
int sy = sign(y2-y1);
int interchange;
int temp;

if(dy>dx){
    temp=dx;
    dx=dy;
    dy=temp;
    interchange=1;
} else {
    interchange=0;
}
for(int i=0; i<=dx; i++){
    putpixel(x, y, WHITE);
    if(Pold>=0){
        if (interchange==1){
            x+=sx;
        } else {
            y+=sy;
               }
    Pold=Pold-(2*dx);
            }
    if (interchange==1){
                        y+=sy;

        } else {
                    x+=sx;

            }
        Pold=Pold+2*dy;
}

getch();
closegraph();
}
