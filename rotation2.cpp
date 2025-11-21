#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(){

int gd=DETECT,gm;
initgraph(&gd,&gm,"");
int X=getmaxx();
int Y= getmaxy();
line(0,Y/2,X,Y/2);
line(X/2,0,X/2,Y);

int x1=70 ,y1=180;
int x2=140,y2=90;
int x3=210,y3=180;
int mx=getmaxx()/2;
int my=getmaxy()/2;


float theta=50*M_PI/180;

int cx=(x1+x2+x3)/3;
int cy=(y1+y2+y3)/3;

int rx1=(x1-cx)*cos(theta)-(y1-cy)*sin(theta)+cx;
int ry1=(x1-cx)*sin(theta)+(y1-cy)*cos(theta)+cy;

int rx2=(x2-cx)*cos(theta)-(y2-cy)*sin(theta)+cx;
int ry2=(x2-cx)*sin(theta)+(y2-cy)*cos(theta)+cx;

int rx3=(x3-cx)*cos(theta)-(y3-cy)*sin(theta)+cx;
int ry3=(x3-cx)*sin(theta)+(y3-cy)*cos(theta)+cx;

line(mx-rx1,my-ry1,mx-rx2,my-ry2 );
line(mx-rx2,my-ry2,mx-rx3,my-ry3);
line(mx-rx3,my-ry3,mx-rx1,my-ry1);




getch();
closegraph();

}