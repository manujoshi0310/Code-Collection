#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
    int x1,y1,x2,y2,i;
    float x,y,dx,dy,length;
    int gd=DETECT, gm;

    cout << "Enter start points:";
    cin >> x1 >> y1;
    cout << "\nEnter end points:";
    cin >> x2 >>y2;

    initgraph(&gd, &gm, (char*)"");

    if(abs(x1-x2)>abs(y1-y2)){
        length = x1-x2;
    }
    else{
        length = y1-y2;
    }

    dx = (x1-x2)/length;
    dy = (y1-y2)/length;

    x=x1;
    y=y1;
    i=0;

    while(i<=length){
        putpixel(x,y,RED);
        x+=dx;
        y+=dy;
        delay(100);
        i++;
    }
}
