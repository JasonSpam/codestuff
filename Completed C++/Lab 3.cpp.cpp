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
double first;
double second;
char op;
double ans;
string phrase = "";
char choice = 'bruh';
while(choice!='q')
{
cout<<"Please enter a number: ";
cin>>first;
cout<<"Please enter an operation (+, -, *, /): ";
cin>>op;
cout<<"Please enter a second number: ";
cin>>second;
if(op == '+')
{
	ans = first + second;
	phrase = "sum";
}
if(op == '-')
{
	ans = first - second;
	phrase = "difference";
}
if(op == '*')
{
	ans = first * second;
	phrase = "product";
}
if(op == '/')
{
	ans = first/(second);
	phrase = "quotient";
}
if(op == '/' || op == '+' || op == '-' || op == '*')
{
cout<<"The "<<phrase<<" between the two numbers is: "<<ans<<endl;
}
else
{
cout<<"Invalid operation."<<endl;
}
cout<<"Press q to quit using calculator. Otherwise press any other character: ";
cin>>choice;
}
      getch();
}



