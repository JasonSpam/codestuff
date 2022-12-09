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
char choice;
char symbol = '#';
int height = 15;
int width = 30;
int i;
for(i = 0; i<width + 1; i++){
	cout<<symbol;
}
cout<<endl;
for(i = 0; i<height; i++){
	cout<<symbol;
	gotoxy(width, i);
	cout<<symbol<<endl;
}
for(i = 0; i<width + 1; i++){
	cout<<symbol;
}
while(choice!='q'){
	gotoxy(width/2, height/2);
	cout<<random(10);
	gotoxy(0, height + 2);
	cout<<"Press q to quit. Otherwise press any other character: ";
	cin>>choice;
}
      getch();
}



