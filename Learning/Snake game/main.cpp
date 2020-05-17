#include <iostream>
#include<time.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int gd,gm,x=200,y=200,d=1,dir=1;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");
    delay(2000);
    srand(time(NUll));
    setfillstyle(1,2);

    for(;;){
        setfillstyle(1,0);
        bar(0,0,640,480);
        setfillstyle(1,2);
        bar(0,0,640,10);
        bar(0,0,10,480);
        bar(0,480,640,470);
        bar(630,10,640,480);

        if(GetAnyKeyState(VK_RIGHT)){d=1;}
        else if(GetAnyKeyState(VK_LEFT)){d=2;}
        else if(GetAnyKeyState(VK_UP)){d=3;}
        else if(GetAnyKeyState(VK_DOWN)){d=4;}
        else {d=0;}
        switch(d){
        case 0:
            if(dir==1){x=x+10;}
            else if (dir==2){x=x-10;}
            else if (dir==3){y=y-10;}
            else if (dir==4){y=y+10}
            else {d=0;}
            break;
        case 1:
        case 2:
        case 3:
        case 4:




        }

        bar(x,y,x+10,y+10);


    }

    return 0;
}
