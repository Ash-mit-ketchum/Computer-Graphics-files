#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main(){

int x1, y1, x2, y2;

printf("enter x1: ");
scanf("%d",&x1);

printf("enter y1: ");
scanf("%d",&y1);

printf("enter x2: ");
scanf("%d",&x2);

printf("enter y2: ");
scanf("%d",&y2);

int xinc, yinc;
int steps;
int dx=x2-x1;
int dy=y2-y1;

if(abs(dx)>abs(dy)){
    steps=dx;
    xinc=(float)(x2-x1)/steps;
    yinc=(float)(y2-y1)/steps;
} else {
    steps=dy;
    xinc=(float)(x2-x1)/steps;
    yinc=(float)(y2-y1)/steps;
}

int x=x1;
int y=y1;


int gd= DETECT, gm;
initgraph(&gd, &gm, "");
for(int i=0; i<=steps; i++){
    x+=xinc;
    y+=yinc;
    putpixel(x, y, WHITE);
}

getch();
closegraph();
}
