#include<graphics.h>
#include<conio.h>
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int X=getmaxx();
int Y=getmaxy();
int mx=X/2;
int my=Y/2;

line(0,Y/2,X,Y/2);
line(X/2,0,X/2,Y);

int x1=50,y1=60;
int x2=100,y2=60;
int x3=100 ,y3=120;
int x4=50,y4=120;

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);

line(x3,y3,x4,y4);
line(x4,y4,x1,y1);



float sh=.75;
int dx1=x1+(sh*y1);
int dy1=y1;

int dx2=x2+(sh*y2);
int dy2=y2;

int dx3=x3+(sh*y3);
int dy3=y3;

int dx4=x4+(sh*y4);
int dy4=y4;

line(dx1,dy1,dx2,dy2);
line(dx2,dy2,dx3,dy3);

line(dx3,dy3,dx4,dy4);
line(dx4,dy4,dx1,dy1);







    getch();
    closegraph();
}
