#include <stdio.h>
#include <graphics.h>

int main(){
int gd= DETECT, gm;
initgraph(&gd, &gm, "");

int x1=100, y1=100, x2=400, y2=300;
float xinc, yinc;
int dx=x2-x1;
int dy=y2-y1;
float steps;
float x=x1;
float y=y1;

if(abs(dx)>abs(dy)){
    steps=abs(dx);
    xinc=(float)(x2-x1)/steps;
    yinc=(float)(y2-y1)/steps;
} else {
    steps=abs(dy);
    xinc=(float)(x2-x1)/steps;
    yinc=(float)(y2-y1)/steps;
}


for(int i=0; i<=steps; i++){

    putpixel(x, y, WHITE);
    x+=xinc;
    y+=yinc;
}

getch();
closegraph();
}
