#include<graphics.h>
#include<conio.h>
int main()
{
    int gd=DETECT,gm;
    initgraph (&gd,&gm,"c:\\tc\\bgi");

    printf("\n\nLINE");
    line(110,50,250,50);

    printf("\n\n\n\nRECTANGLE");
    //SYNTAX - rectangle(int left, int top, int right, int bottom);
    rectangle(115,100,275,150);

    printf("\t\t\t\n\n\n\n\n\n\nARC(Semi-circle)");
    //SYNTAX - arc(int x, int y, int start_angle,int end_angle, int radius);  {where,(x, y) is the center of the arc.}
    arc(160,200,180,0,50);

    printf("\t\n\n\n\nCIRCLE");
    //SYNTAX - circle(x, y, radius);  {where,(x, y) is center of the circle.}
    circle(160,320,50);

    getch();
}
