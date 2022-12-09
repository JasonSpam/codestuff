#include"Jason.h"
main()
{
srand(time(NULL));
int num1;
int num2;
cout<<"Please enter num: ";
cin>>num1;
cout<<"Please enter num2: ";
cin>>num2;
cout<<endl;

cout<<"       "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
cout<<"       "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
cout<<"       "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
cout<<"       "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
cout<<"       "<<num1<<" % "<<num2<<" = "<<num1%num2;

      getch();
}
      
