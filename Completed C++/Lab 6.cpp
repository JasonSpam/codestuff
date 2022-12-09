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
int height;
int width;
char symbol;
int i;
int j;
cout<<"Enter a symbol: ";
cin>>symbol;
cout<<"Enter a height: ";
cin>>height;
cout<<"Enter a width: ";
cin>>width;
cout<<endl;
for(j = 0; j < height; j++){
for(i = 0; i < width; i++) {
cout<<symbol;
}
cout<<endl;
}
      getch();
}



