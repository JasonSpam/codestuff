// base code file

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
using namespace std;
void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
// generates a random number between 0 and r inclusive
int random(int r)
{
    return rand()% r + 1;
}  
///////////////////////////////////////////////////////////////////////
main()
{
      srand(time(NULL)); 
char symbol;
char symbol2;
int height;
int width;
int i;
int xloc;
int yloc;
cout<<"Enter a symbol (for head): ";
cin>>symbol;
cout<<"Enter a symbol (for face): ";
cin>>symbol2;
cout<<"Enter pumpkin height: ";
cin>>height;
cout<<"Enter pumpkin width: ";
cin>>width;
cout<<"Enter a x-coordinate: ";
cin>>xloc;
cout<<"Enter a y-coordinate: ";
cin>>yloc;
gotoxy(xloc, yloc);
for(i = 0; i<width; i++){
	cout<<symbol;
}
cout<<endl;
for(i = 0; i<height; i++){
	gotoxy(xloc, yloc + i);
	cout<<symbol;
	gotoxy(width + xloc, i + yloc);
	cout<<symbol<<endl;
}
gotoxy(xloc, yloc + height);
for(i = 0; i<width + 1; i++){
	cout<<symbol;
}
gotoxy(xloc + width/4, yloc + height/3.5);
cout<<symbol2;
gotoxy(xloc + width - width/4, yloc + height/3.5);
cout<<symbol2;
gotoxy(xloc + width/2.5, yloc + height - height/3.5);
for(i = 0; i<width/4.5; i++){
cout<<symbol2;
}
      getch();
}



