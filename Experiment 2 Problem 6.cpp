#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num, i, sum;
	sum = 0;
	cout << "ENTER A NUMBER: ";
	cin >> num;
	
	while (num > 0 )
	{
	
	for (i=0;i<=num; i++)
	{
		sum = i + sum;
	}
	cout << "THE SUM OF ALL WHOLE NUMBERS FROM 1 TO  " << num << " is " << sum <<".";
	
	cout <<"\n\nENTER A NUMBER: "; 
	cin >> num;
	sum = 0;
	
	if (num <= 0)
	{
	cout << "THANK YOU!";
	}
}
	 
getch();
return 0;
	
}
