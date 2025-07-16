#include <stdio.h>
#include <graphics.h>

int main(){

int gd= DETECT, gm;
initgraph(&gd, &gm, "");

int x1=100, y1=100, x2=300, y2=300;
int dx=x2-x1;
int dy=y2-y1;
int Pold= 2*dy-dx;
int Pnew;
int x=x1;
int y=y1;


    for(int i=1; i<dx; i++){

        if (Pold<0){
            Pnew= Pold+(2*dy);
            Pold=Pnew;
            x++;
        }else{
            Pnew=Pold+(2*dy)-(2*dx);
            Pold=Pnew;
            x++;
            y++;
            }
        putpixel(x, y, WHITE);
    }

getch();
closegraph();
}
