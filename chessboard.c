#include<graphics.h>
#include<conio.h>
void main()
{
int gdriver=DETECT,gm;
int i,j;
int x1=90,y1=10,x2=90,y2=10;
initgraph(&gdriver,&gm,"c:\\tc\\bgi");
setfillstyle(SOLID_FILL,15);
for(i=0;i<9;i++)
{
line(90,y1,498,y2);
y1=y1+51;y2=y2+51;
line(x1,10,x2,418);
x1=x1+51;x2=x2+51;
}
x1=115;y1=35;
for(i=2;i<10;i++)
{
	if(i%2==0)
	  y1=35;
	else
	  y1=85;
	for(j=0;j<4;j++)
	{
	floodfill(x1,y1,getmaxcolor());
	y1=y1+101;
	}
	x1=x1+50;
}
getch();
closegraph();
}
