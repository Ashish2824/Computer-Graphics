#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
        int gm,gr,xc_min, yc_min, xc_max, yc_max,x,y,c;
        detectgraph(&gm, &gr);
        initgraph(&gm, &gr, "c:\\tc\\BGI");

        printf("Enter the clip-min coordinate --> \n");
        scanf("%d%d", &xc_min, &yc_min);
        printf("Enter the clip-max coordinate --> \n");

        scanf("%d%d", &xc_max, &yc_max);
        rectangle(xc_min,yc_max,xc_max,yc_min);

        printf("Enter the coordinate of the POINT--> \n");
        scanf("%d%d", &x, &y);


        detectgraph(&gm, &gr);
        initgraph(&gm, &gr, "d:\\tc\\BGI");
        rectangle (xc_min,yc_max,xc_max,yc_min);

        printf("*******POINT CLIPPING******\n");
        if ((xc_min<x) && (x<xc_max))
            {
                if ((yc_min<y) && (y<yc_max))
                {
                    printf("The point is inside the clip window\n");
        }
     }
          else
          printf("The point is outside the clip window \nThe point is clipped\n");
}
