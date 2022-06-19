#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    int gd = DETECT ,gm, i;
    float x, y,dx,dy,steps, X_incr, Y_incr;
    int x1, x2, y1, y2;
    initgraph(&gd, &gm, "c:\\tc\\gbi");

    //x1 and y1 are co-ordinates of initial point and x2 and y2 are co-ordinates of final point
    x1 = 100 , y1 = 100, x2 = 400, y2 = 400;
    dx = x2 - x1;   //change along x-axis
    dy = y2 - y1;   //change along y-axis

    if(dx >= dy)
           {
        steps = dx;
    }
    else
           {
        steps = dy;
    }

    X_incr = dx/steps;
    Y_incr = dy/steps;

    x = x1;
    y = y1;

    i = 1;
    while(i<= steps)    //increment upto number of steps
    {
        putpixel(x, y, GREEN);
        x += X_incr;
        y += Y_incr;
        i = i+1;
    }

    getch();
    closegraph();
}
