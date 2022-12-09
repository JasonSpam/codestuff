#include"Jason.h"
main()
{
srand(time(NULL)); // keep this line of code
//
char one;
char two;
char three;
int height;
int x = 25;
int y = 8;
int d = 2;
int z = 3;
cout<<"Please enter a symbol for C: ";
cin>>one;
cout<<"Please enter a symbol for V: ";
cin>>two;
cout<<"Please enter a symbol for the box: ";
cin>>three;
cout<<"Please enter a number for height: ";
cin>>height;
drawlineH(one, x, y, height);
drawlineV(one, x, y, height);
drawlineH(one, x, y + height, height);
diagonaldown(two, x + height*1.5, y, height);
diagonalup(two, x + height + height*1.5, y + height, height + 1);
framedbox(three, x - z, y - d, 4*height + z, height + 2*d);
//
      getch(); // keep this line of code
}
      
