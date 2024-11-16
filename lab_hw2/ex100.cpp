#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double x = -30, y = 0;
	
	do
	{
		y = cos(x); 
		cout << "x: " << x << "\ty: " << y << endl;
		x += 3.5;
	}
	while(x <= 5);

	do
	{
		y = sin(x); 
		cout << "x: " << x << "\ty: " << y << endl;
		x += 3.5;
	}
	while(x <= 30);

	return (0);
}
