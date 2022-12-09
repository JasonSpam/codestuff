#include"Jason.h"
int main()
{
srand(time(NULL));
	ifstream f("firstdoc.txt");
	char neat;
	int counter;
	
	while(f >> neat)
	{
		cout << neat;
		counter++;
	}
	cout<<endl;
	cout<<"This file contains "<<counter<<" characters";
      getch();
}
      
