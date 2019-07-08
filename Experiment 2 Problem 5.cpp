#include <iostream>
#include <conio.h>

using namespace std;

void fibonacci(int x)
{
	int i, sequence;
	int a = 1, b = 1;
	
	if (x<1)
	return;
	for (i=1;i<=x;i++)
	{
		cout << b << ", ";
		sequence = a + b;
		a = b;
		b = sequence;
	}
}
int main()
{
	fibonacci(20);
	
	getch();
	return 0;
}
