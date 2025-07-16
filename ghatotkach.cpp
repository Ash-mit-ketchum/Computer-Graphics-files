#include <graphics.h>
#include <conio.h>

int main(){
int gd=DETECT, gm;
initgraph(&gm, &gd, "");

int x1=100, y1=100, x2=500, y2=400;
int dx= x2-x1;
int dy=y2-y1;
float xinc, yinc;
int steps;
int x=x1;
int y=y1;

if(dx>dy){
    steps=dx;
    xinc=dx/steps;
    yinc=dy/steps;
}else{

    steps=dy;
    xinc=dx/steps;
    yinc=dy/steps;
}

for(int i=0; i<=steps; i++){
    x+=xinc;
    y+=yinc;
    putpixel(x, y, WHITE);
}

getch();
closegraph();
}
