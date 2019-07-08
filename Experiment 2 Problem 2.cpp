#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int gallon; 
	float bill, totalCost; // 
	const float waterCharge = 35, chargeperGallon = 1.10; 
	
	cout << "ENTER THE UNPAID AMOUNT FROM LAST MONTH: ";
	cin >> bill; 
	
	

	cout << "ENTER GALLONS CONSUMED FROM LAST READING: ";
	cin >> gallon;
	
	if (bill < 0 || gallon < 0 )
	{
	cout << "\nINVALID AMOUNT";
	return 0;
	}
	else if (bill > 0)
	{	// late charge
		totalCost = waterCharge + (chargeperGallon * gallon) + bill + 20;
		cout << "\nAMOUNT DUE: P" << totalCost;
	}
	else
	{
		totalCost = waterCharge + (chargeperGallon * gallon);
		cout << "\nAMOUNT DUE: P" << totalCost;
	}

getch();	
return 0;
}
