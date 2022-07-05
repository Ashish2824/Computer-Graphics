#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

int ch,x,y,z,i,w,ch1,ch2,xa,ya,ra,a[10],b[10],da,db;

int main(){
float x1,y1,z1,w1,dx,dy,theta,x1s,y1s,sx,sy,a1[10],b1[10];
int gm ,gr;
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"d:\\tc\\BGI");

printf("Enter the LEFT and TOP for the rectangle:\n");
scanf("%d%d",&x,&y);
printf("Enter the RIGHT and BOTTOM the rectangle:\n");
scanf("%d%d",&z,&w);

rectangle(x,y,z,w);

da=z-x;
db=w-y;
a[0]=x;
b[0]=y;
a[1]=x+da;
b[1]=y;
a[2]=x+da;
b[2]=y+db;
a[3]=x;
b[3]=y+db;

while(1)
{
printf("\n\n******2D Transformations*******\n");
printf("1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing\n6.Exit\n\nEnter your choice:\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"d:\\tc\\BGI");
rectangle(x,y,z,w);
printf("*******Translation*******\n\n");
printf("Enter the value of shift vector (i.e. dx and dy):\n");
scanf("%f%f",&dx,&dy);
x1=x+dx;
y1=y+dy;
z1=z+dx;
w1=w+dy;
rectangle(x1,y1,z1,w1);
break;

case 2:
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"d:\\tc\\BGI");
rectangle(x,y,z,w);
printf("*******Rotation*******\n\n");
printf("Enter the value of fixed point and angle of rotation--> \n");
scanf("%d%d%d",&xa,&ya,&ra);
theta=(float)(ra*(3.14/180));

for(i=0;i<4;i++)
{
a1[i]=(xa+((a[i]-xa)*cos(theta)-(b[i]-ya)*sin(theta)));
b1[i]=(ya+((a[i]-xa)*sin(theta)+(b[i]-ya)*cos(theta)));
}
for(i=0;i<4;i++)
{
if(i!=3)
line(a1[i],b1[i],a1[i+1],b1[i+1]);
else
line(a1[i],b1[i],a1[0],b1[0]);
}
break;

case 3:
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"d:\\tc\\BGI");
rectangle(x,y,z,w);
printf("********Scaling*******\n\n");
printf("Enter the value of scaling factor:\n");
scanf("%f%f",&sx,&sy);
x1=x*sx;
y1=y*sy;
z1=z*sx;
w1=w*sy;
rectangle(x1,y1,z1,w1);
break;

case 4:
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"d:\\tc\\BGI");
rectangle(x,y,z,w);
printf("*******Reflection*********\n");
printf("1.About x-axis\n2.About y-axis\n3.About both axis\nEnter your choice:\n");
scanf("%d",&ch1);

switch(ch1)
{
case 1:
printf("Enter the fixed point\n");
scanf("%d%d",&xa,&ya);
theta=(float)(90*(3.14/180));
for(i=0;i<4;i++)
{
a1[i]=(xa+((a[i]-xa)*cos(theta)-(-b[i]-ya)*sin(theta)));
b1[i]=(ya+((a[i]-xa)*sin(theta)+(-b[i]-ya)*cos(theta)));
}
for(i=0;i<4;i++)
{
if(i!=3)
line(a1[i],b1[i],a1[i+1],b1[i+1]);
else
line(a1[i],b1[i],a1[0],b1[0]);
}
break;
case 2:
printf("Enter the fixed point\n");
scanf("%d%d",&xa,&ya);
theta=(float)(270*(3.14/180));
for(i=0;i<4;i++)
{
a1[i]=(xa+((-a[i]-xa)*cos(theta)-(b[i]-ya)*sin(theta)));
b1[i]=(ya+((-a[i]-xa)*sin(theta)+(b[i]-ya)*cos(theta)));
}
for(i=0;i<4;i++)
{
if(i!=3)
line(a1[i],b1[i],a1[i+1],b1[i+1]);
else
line(a1[i],b1[i],a1[0],b1[0]);
}
break;
case 3:
printf("Enter the fixed point\n");
scanf("%d%d",&xa,&ya);
theta=(float)(180*(3.14/180));
for(i=0;i<4;i++)
{
a1[i]=(xa+((-a[i]-xa)*cos(theta)-(-b[i]-ya)*sin(theta)));
b1[i]=(ya+((-a[i]-xa)*sin(theta)+(-b[i]-ya)*cos(theta)));
}
for(i=0;i<4;i++)
{
if(i!=3)
line(a1[i],b1[i],a1[i+1],b1[i+1]);
else
line(a1[i],b1[i],a1[0],b1[0]);
}
break;
}
break;

case 5:
detectgraph(&gm,&gr);
initgraph(&gm,&gr,"d:\\tc\\BGI");
rectangle(x,y,z,w);
printf("*******Shearing******\n\n");
printf("1.x-direction shear\n2.y-direction shear\nEnter your choice:\n");
scanf("%d",&ch2);

switch(ch2)
{
case 1:
printf("Enter the value of shear:\n");
scanf("%f",&x1s);
x1=x+(y*x1s);
y1=y;
z1=z+(w*x1s);
w1=w;
rectangle(x1,y1,z1,w1);
break;
case 2:
printf("Enter the value of shear:\n");
scanf("%f",&y1s);
x1=x;
y1=y+(x*y1s);
z1=z;
w1=w+(z*y1s);
rectangle(x1,y1,z1,w1);
break;
}
break;


case 6:
exit(0);
}
}
getch();
}
