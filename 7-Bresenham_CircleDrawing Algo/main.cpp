#include<conio.h>
#include<graphics.h>
#include<stdio.h>

void DrawCircle(int x, int y, int xc, int yc);
int main(){
    int gd = DETECT, gm;
    int r, xc, yc, dp, x, y;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    printf("Enter the center co-ordinate --> \n");
    scanf("%d", &xc);
    scanf("%d", &yc);
    printf("Enter the radius of the circle --> \n");
    scanf("%d", &r);

    dp = 3 - 2*r;
    x = 0;
    y = r;
    DrawCircle(x,y,xc,yc);
    while(x < y){

        if(dp <= 0){
            dp = dp + 4*x + 6;
            DrawCircle(++x, y, xc, yc);
        }
        else{
            dp = dp + (4*(x - y)) + 10;
            DrawCircle(++x, --y, xc, yc);
        }

    }
       getch();
       closegraph();
}

 void DrawCircle(int x, int y, int xc, int yc){
    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc+y, yc-x, RED);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc-y, yc-x, RED);
}

