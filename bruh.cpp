#include <stdio.h>
#include <graphics.h>

int main(){
int gd=DETECT, gm;
initgraph(&gd, &gm, "");

int x1=100, y1=100, x2=400, y2=400;
int dx=x2-x1;
int dy=y2-y1;
int x=x1, y=y1;
int p=2*dy-dx;
int sx, sy;
int interchange;
if (dy>dx){
    int temp=dx;
    dx=dy;
    dy=temp;
    interchange=1;
}
if(dx>=1){
    sx=1;
}else{
    sx=-1;
}
if(dy>=1){
    sy=1;
}else{
    sy=-1;
}

for(int i=1; i<=dx; i++){
    if(p<0){
        if(interchange==1){
            y+=sy;
        }else{
            x+=sx;
            }
            p+=p+2*dy;
    }else{
        x+=sx;
        y+=sy;
    }

putpixel(x, y, WHITE);
}

getch();
closegraph();
}
