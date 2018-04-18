#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{

	initwindow((GetSystemMetrics(SM_CXFULLSCREEN)-3),GetSystemMetrics(SM_CYFULLSCREEN),"x");
	int mx = GetSystemMetrics(SM_CXFULLSCREEN);
	int my = GetSystemMetrics(SM_CYFULLSCREEN);
	int x,y;              //get max value for y co-ordinate
    cout<<mx<<" "<<my;
	while(!kbhit())
	{ cleardevice();
      x = rand()%(mx-125)+60 ;              //get max value for x co-ordinate
	  y = rand()%(my-125)+60;
	  //cout<<x<<" "<<y<<endl;
    setfillstyle(1,YELLOW);
	fillellipse(x,y,80,80);
	setfillstyle(1,BLACK);
	fillellipse(x-30,y-30,15,20);
	fillellipse(x+30,y-30,15,20);
	arc(x,y,180,360,50);
	delay(500);
	}
	getch();
	closegraph();			//close graphic mode
	return 0;

}

