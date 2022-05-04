#include<iostream.h>
#include"R1.cpp"
#include<conio.h>
#include<graphics.h>
#include<math.h>
void midptcircle(int,int,int);
void main()
{
 int x,y,r;
 clrscr();
 cout<<"Enter the values of x,y & r";
 cin>>x>>y>>r;
 midptcircle(x,y,r);
 getch();
}
void midptcircle(int a,int  b,int c)
{
 int gd=DETECT,gm;
 initgraph(&gd,&gd,"C:\\tc\\bgi");
 outtextxy(100,10,"Midpoint Circle");
 ddaline(10,480,10,0);
 outtextxy(0,10,"Y");
 ddaline(0,470,640,470);
 outtextxy(620,472,"X");
 int x=0,y=c,d=1-c;
 while(x<=y)
 {
  putpixel(50+(a+x),470-(b+y),2);
  putpixel(50+(a+x),470-(b-y),2);
  putpixel(50+(a-x),470-(b+y),2);
  putpixel(50+(a-x),470-(b-y),2);
  putpixel(50+(a+y),470-(b+x),2);
  putpixel(50+(a+y),470-(b-x),2);
  putpixel(50+(a-y),470-(b+x),2);
  putpixel(50+(a-y),470-(b-x),2);
  if(d<0)
  d=d+2*x+3;
  else{
  d=d+2*(x-y)+5;
  y--;
  }
  x++;
  }
  floodfill(50+a,470-b,GREEN);
  putpixel(50+a,470-b,1);
  }
