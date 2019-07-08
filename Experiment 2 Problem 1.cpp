#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	
	char p;
	float price, hours;
	
	
	cout << "A = PACKAGE A: P995/mo with 10hrs of access provided\n";
	cout << "B = PACKAGE B: P1495/mo with 20 hrs of access provided\n";
	cout << "C = PACKAGE C: P1995/mo with unlimited access provided\n\n";
	
	cout << "ENTER SUBSCRIPTION PACKAGE: ";
	cin >> p;
	
	switch(p)
	{
		case 'A':
		case 'a':
			cout << "\nAdditional hours are P20/hr\n\n";
			cout << "Enter number of hours: ";
			cin >> hours;
			
			if(hours <= 10)
			{
				price = 995;
				cout <<"\nTOTAL AMOUNT DUE: P" << price;
			}
			
			if(hours > 10)
			{
				price = 995 + (hours - 10) * 20;
				cout <<"\nTOTAL AMOUNT DUE: P" << price; 
			}
			
			break;
		
		case 'B':
		case 'b':	
			cout << "\nAdditional hours are P10/hr\n\n";
			cout << "Enter number of hours: ";
			cin >> hours;
			
			if(hours <= 20)
			{
				price = 1495;
				cout <<"\nTOTAL AMOUNT DUE: P" << price;
			}
			
			if(hours > 20)
			{
				price = 1495 + (hours - 20) * 10;
				cout <<"\nTOTAL AMOUNT DUE: P" << price; 
			}
			
			break;
		
		case 'C':
		case 'c':
			price = 1995;
			cout <<"\nTOTAL AMOUNT DUE: P" << price;
			
			break;
				
	}
	
	
	
	
	
	
	

	
getch();
return 0;
	
}
