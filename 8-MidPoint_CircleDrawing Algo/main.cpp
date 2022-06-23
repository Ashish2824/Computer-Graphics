#include<graphics.h>
#include<conio.h>
#include<stdio.h>

int main()
{
int x,y,x_mid,y_mid, r,dp;
int g_mode,g_driver=DETECT;
initgraph(&g_driver,&g_mode, (char*)"");
printf(" **** MID POINT Circle drawing algorithm ****\n\n");
printf("\nEnter the coordinates (x & y) of the circle --> \n");
scanf("%d %d",&x_mid,&y_mid);
printf("\nEnter the value for radius --> ");
scanf("%d",&r);
x=0;
y=r;
dp=(5/4)-r;

do
{
putpixel(x_mid+x,y_mid+y, YELLOW);
putpixel (x_mid+y,y_mid+x, RED);
putpixel(x_mid-y,y_mid+x, BLUE);
putpixel(x_mid-x,y_mid+y, WHITE);
putpixel (x_mid-x,y_mid-y, RED);
putpixel(x_mid-y,y_mid-x, GREEN);
putpixel (x_mid+y,y_mid-x, YELLOW);
putpixel (x_mid+x,y_mid-y, WHITE);

if (dp<0){
    dp+=(2*x)+1;
    }

else{
    y=y-1;
    dp+=(2*x)-(2*y)+1;
    }
    x=x+1;
}

while (y>x);
getch();
}
