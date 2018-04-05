#include<graphics.h>
#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	int rand;
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	cout<<"Enter For Random Position: \n";
	cin>>rand;

	int x = rand;              //get max value for x co-ordinate
	int y = rand;              //get max value for y co-ordinate
	setfillstyle(1,YELLOW);    	//pattern and colour
	fillellipse(x/2,y/2,80,80);


	setfillstyle(1,BLACK);
	fillellipse(x/2-30,y/2-30,15,20);
	fillellipse(x/2+30,y/2-30,15,20);

	arc(x/2,y/2,180,360,50);

	getch();
	closegraph();			//close graphic mode
	return 0;

}