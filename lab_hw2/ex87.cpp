#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x = -8, y = 0;
	
	while(x <= 8)
	{
		y = 0;
		cout << "x: " << x << "\ty: " << y << endl;
		x += 3;
	}
	while(x <= 8)
	{
		y = pow(x, 2) + (4 * pow(x, 8));
		cout << "x: " << x << "\ty: " << y << endl;
		x += 3;
	}

}
