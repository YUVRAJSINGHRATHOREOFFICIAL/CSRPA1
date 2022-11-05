#include<graphics.h>

 int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

line(250,100,320,100);
line(250,270,320,270);
line(250,100,200,150);
line(250,270,200,220);
line(200,150,200,220);
line(320,100,370,150);
line(320,270,370,220);
line(370,150,370,220);
setfillstyle(SOLID_FILL,11);
floodfill(370,150,WHITE);
pieslice(285,100,0,180,35);
//setfillstyle(SOLID_FILL,2);
//floodfill(370,150,WHITE);
pieslice(285,270,180,0,35);
pieslice(200,185,90,270,35);
pieslice(370,185,270,90,35);
pieslice(227,125,45,225,35);
pieslice(227,245,135,315,35);
pieslice(345,125,315,135,35);
pieslice(345,245,224,45,35);
setfillstyle(SOLID_FILL,14);
floodfill(285,185,WHITE);
circle(285,185,60);
setfillstyle(HATCH_FILL,14);
setbkcolor(12);
floodfill(285,185,WHITE);
setfillstyle(8,0);
setbkcolor(4);
line(285,305,285,395);
line(225,395,345,395);
line(245,465,325,465);
line(225,395,245,465);
line(345,395,325,465);
floodfill(285,400,WHITE);
getch();
closegraph();

}
