#include <stdio.h>
#include <graphics.h>

int main(){
int gd= DETECT, gm;
initgraph(&gd, &gm, "");

line(100, 300, 300, 300);
rectangle(100, 100, 300, 200);
circle(500, 150, 50);
ellipse(350, 350, 0, 360, 100, 50);
arc(350, 100, 10, 100, 100);

getch();
closegraph();
}
