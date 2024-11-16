#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double x = 10, y = 0;
	
	do
	{
		y = exp(sin(x)); 
		cout << "x: " << x << "\ty: " << y << endl;
		x += 3.2;
	}
	while(x <= 23);

	return (0);
}
