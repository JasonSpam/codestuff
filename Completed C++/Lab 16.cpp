#include"Jason.h"
main()
{
	srand(time(NULL)); 
    framedbox('T', 30, 10, 51, 25);
    framedbox('T', 35, 13, 10, 5);
    framedbox('T', 51, 13, 10, 5);
    framedbox('T', 67, 13, 10, 5);
    framedtriangle('H', 40, 20, 6);
    char choice = 'g';
    int num1;
    int num2;
    int num3;
    int am;
    int saved = 0;
    int money = 100;
    int dec = 4;
    gotoxy(33, 30);
	cout<<"Press any character to slots, press q to quit.";
	while(choice != 'q') {
	choice=getch();
		while(kbhit() == 0){
			num1 = random(20);
			num2 = random(20);
			num3 = random(20);
			gotoxy(39, 15);
			cout<<num1;
			gotoxy(55, 15);
			cout<<num2;
			gotoxy(71, 15);
			cout<<num3;
			gotoxy(33, 32);
		}
	if(num1 == num2 && num1 == num3){
		money = money + 5;
	}
	if(num1 != num2){
		money = money - 5;
	}
	if(money == 5)	cout<<"Remaining money: $"<<dec<<'.'<<"05";
	else if(money > 0) cout<<"Remaining money: $"<<dec<<'.'<<money;
	else if(money == 0) cout<<"Remaining money: $"<<dec<<'.'<<"00";
	else if(money < 0){
		dec = dec - 1;
		money = 95;
		cout<<"Remaining money: $"<<dec<<'.'<<money;
	}
	if(dec == -1) break;
	choice=getch();
	}
}
      
