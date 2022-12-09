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
int first = 0;
int second = 0;
int answer = 0;
cout<<"Enter a number: ";
cin>>first;
cout<<"Enter a second number: ";
cin>>second;
answer = first*second;
cout<<first<<" multiplied by "<<second<<" is "<<answer; 
  
      getch();
}



