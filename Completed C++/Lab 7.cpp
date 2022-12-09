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
      // code
	char symbol;
	int length;
	int xloc;
	int yloc;
    cout<<"Enter a symbol: ";
    cin>>symbol;
    cout<<"Enter a x coordinate: ";
    cin>>xloc;
    cout<<"Enter a y coordinate: ";
    cin>>yloc;
    cout<<"Enter a length of the line: ";
    cin>>length;
    gotoxy(xloc, yloc);
    for(int i = 0; i < length; i++)
    {
    cout<<symbol;
	}
      getch();
}



