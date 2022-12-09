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
double first;
double second;
int height = 10;
int width = 50;
int i;
char op;
char symbol;
double ans;
cout<<"Enter the symbol: ";
cin>>symbol;
cout<<"Enter the first number: ";
cin>>first;
cout<<"Enter the operatior (+,-,*,/): ";
cin>>op;
cout<<"Enter the second number: ";
cin>>second;
if(op == '+'){
	ans = first + second;
}
if(op == '-'){
	ans = first - second;
}
if(op == '*'){
	ans = first * second;
}
if(op == '/'){
	ans = first/(second);
}
for(i = 0; i<width + 1; i++){
	cout<<symbol;
}
cout<<endl;
for(i = 0; i<height; i++){
	cout<<symbol;
	gotoxy(width, i + 5);
	cout<<symbol<<endl;
}
for(i = 0; i<width + 1; i++){
	cout<<symbol;
}
gotoxy(width/2.5, 4 + height/2);
cout<<first<<" "<<op<<" "<<second<<" = "<<ans;
      getch();
}



