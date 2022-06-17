#include <conio.h>
#include <graphics.h>
#include <stdio.h>

int main()
{
    // Initialize of gdriver with DETECT macros
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");

    line(70, 100, 150, 50);     //roof triangle line 1
    line(150, 50, 220, 100);    //roof triangle line 2
    line(150, 50, 400, 50);     //roof's top horizontal line
    line(400, 50, 500, 100);    // roof's side line

    line(187, 75, 449, 75);     // horizontal line of roof tiles
    line(340, 50, 440, 100);    //roof tile line 3
    line(280, 50, 380, 100);    //roof tile line 2
    line(220, 50, 320, 100);    //roof tile line 1


    rectangle(70,100,220,270);
    rectangle(220,100,500,270);

    rectangle(110,145,180,270); //door


    circle(160, 200, 7);   //door knob
    circle(290, 150, 30);   //window1
    circle(390, 150, 30);   //window2

    getch();
}
