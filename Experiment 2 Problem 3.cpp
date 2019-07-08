#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	int x, y;
	float V;
	const float z = 2.5;
	
	cout << "ENTER VALUE OF X: ";
	cin >> x;
	cout << "ENTER VALUE OF Y: ";
	cin >> y;
	
	switch (x)
	{
		case 1: 
			if (1 < y < 5)
			{
				V = (x * y * z);
			}
			else if (y >= 5)
			{
				V = x + y / z;
			}
		break;
		
		case 2:
			if (y <= 5)
			{
				V = fabs((x - y) / z);
			}
			else if (y > 5)
			{
				V = x - (sqrt(y + z));
			}
		break;
		
		default:
			
			V = x + y + z;
		break;
		
	}
	cout << "V = " << setw(10) << fixed << setprecision(2) << V;
	
	_getch();
	return 0;
}
