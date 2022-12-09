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
int length;
char direction; 
cout<<"Enter a symbol: ";
cin>>symbol;
cout<<"Enter a length: ";
cin>>length;
cout<<"Enter a direction. H for horizontal, V for vertical, D for diagonal: ";
cin>>direction;
while(direction != 'h' && direction!= 'H' && direction != 'V' && direction != 'v' && direction != 'd' && direction != 'D') {
	cout<<"Please enter a correct input: ";
	cin>>direction;
}
if(direction == 'h' || direction == 'H'){
	for(int i = 0; i < length; i++){
	cout<<symbol<<" ";
}
}
if(direction == 'v' || direction == 'V'){
	for(int i = 0; i < length; i++){
	cout<<symbol<<endl;
	}
}
if(direction == 'd' || direction == 'D'){
	for(int i = 0; i < length; i++){
	gotoxy(i, i + 3);
	cout<<symbol<<endl;
	}
}
      getch();
}



