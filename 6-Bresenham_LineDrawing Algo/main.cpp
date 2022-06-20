#include<conio.h>
#include<graphics.h>
#include<stdio.h>
int main(){
    int x, y, x1, y1, x2, y2, dx, dy, dp_gr, dp_sm, dp;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    printf("Enter co-ordinates of first point(intial) --> ");
    scanf("%d%d", &x1, &y1);
    printf("Enter co-ordinates of second point(final) --> ");
    scanf("%d%d", &x2, &y2);

    x = x1;
    y = y1;
    dx = x2-x1;
    dy = y2-y1;
    dp = (2*dy)- dx;
    dp_gr = (2*dy)-(2*dx);  // decision parameter >=0
    dp_sm = 2*dy;          // decision parameter < 0

    while(x<x1){
        if(dp>=0){
            putpixel(x,y,WHITE);
            dp = dp + dp_gr;
            y = y + 1;
        }
        else{
            putpixel(x,y,WHITE);
            dp = dp + dp_sm;
        }
        x = x+1;
    }

    line(x1,y1,x2,y2);
    getch();
    closegraph();
}
