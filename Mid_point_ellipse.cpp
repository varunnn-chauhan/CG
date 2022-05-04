#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

class ellipse1
{
 int x,y,xc,yc,a,b,aa,bb,aa2,bb2,color;
 public:
 void plotpoints(float x,float y);
 ellipse1(int a,int b)
 {
  aa=a*a;
  bb=b*b;
  aa2=2*a*a;
  bb2=2*b*b;
 }
 void getparameter(void);
 void drawellipse(void);

};

int round(float n)
{
 return (floor(0.5+n));
}
void ellipse1::getparameter(void)
{
 cout<<"Enter the center";
 cin>>xc>>yc;
 cout<<"Enter the value of semi-major & semi-minor axis";
 cin>>a>>b;
 cout<<"Enter the color";
 cin>>color;
}
 void startgraphics(void)
 {
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"C:\\tc\\bgi");
 }
void ellipse1::plotpoints(float x,float y)
{
 putpixel(round(xc+x),round(yc+y),color);
 putpixel(round(xc+x),round(yc-y),color);
 putpixel(round(xc-x),round(yc-y),color);
 putpixel(round(xc-x),round(yc+y),color);
}
void ellipse1::drawellipse(void)
{
 float x=0,y=b,fy=aa2*b,fx=0,p;
 p=bb-aa+b+0.25*aa;
 while(fx<fy)
 {
  x++;
  fx=fx+bb2;
  if(p>=0)
  {
   y--;
   fy=fy-aa2;
  }
  if(p<0)
  p=p+bb+fx;
  else
  p=p+bb+fx-fy;
  plotpoints(x,y);
 }
 p=(bb*x+0.5)+(x+0.5)+aa*(y-1)*(y-1)-aa+bb;
 while(y>0)
 {
  y--;
  fy=fy-aa2;
  if(p<0)
   {
    x++;
    fx=fx+bb2;
   }
  if(p>=0)
  p=p+aa/fy;
  else
  p=p+aa-fy+fx;
  plotpoints(x,y);
 }
}

void main()
{
 clrscr();
 ellipse1 e(200,100);
 e.getparameter();
 clrscr();
 startgraphics();
 e.drawellipse();
 getch();
 closegraph();
}

