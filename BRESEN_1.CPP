#include<iostream.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	int x1,y1,x2,y2,dx,dy,decP,X,Y;
	cout<<"Enter the values of x1 and y1"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the Values of x2 and y2"<<endl;
	cin>>x2>>y2;
	
	dx=x2-x1;
	dy=y2-y1;
	
	X=x1;
	Y=y1;
	
	decP=2*dy-dx;
	
	for( ;X<x2;X++)
	{
		if(decP>=0)
		{
			putpixel(X,Y,WHITE);
			Y=Y+1;
			decP=decP+2*dy-2*dx;
		}
		else
		{
			putpixel(X,Y,WHITE);
			decP=decP+2*dy;
		}
	}
	
	getch();
	return 0;
}
