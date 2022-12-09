#include"Jason.h"
main()
{
srand(time(NULL));
drawlineH('E', 50, 10, 10);
drawbox('E', 20, 20, 20, 20);
framedbox('g', 50, 50, 25, 10);
cout<<endl<<endl;
framedtriangle('g', 50, 75, 27);
framedbox('g', 80, 40, 20, 20);
triangle('a', 50, 80, 20);
triangle('a', 90, 80, 5);
drawbox('a', 40, 80, 5, 5);
framedbox('a', 20, 80, 10, 10);
framedbox('x', 10, 80, 20, 5);
diagonaldown('5', 10, 30, 5);
diagonalup('5', 10, 20, 5);
      getch();
}
      
