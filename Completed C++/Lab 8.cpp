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
  // write code here
char symbol;
int height;
int width;
int yloc;
int xloc;
int i;
int j;
cout<<"Please enter a symbol: ";
cin>>symbol;
cout<<"Please enter a height: ";
cin>>height;
height = height +1;
cout<<"Please enter a width: ";
cin>>width;
cout<<"Please enter an x-coordinate: ";
cin>>xloc;
cout<<"Please enter a y-coordinate: ";
cin>>yloc;
gotoxy(xloc, yloc);
for(j = 0; j < height; j++){
for(i = 0; i < width; i++) {
cout<<symbol;
}
cout<<endl;
gotoxy(xloc, yloc + j);
}
  
      getch();
}



