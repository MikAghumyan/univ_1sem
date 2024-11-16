#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = -2.7, y = 0;

	do{
		y = exp(1/tan(x));
		cout << "x: " << x << "\ty: " << y << endl;
		x += 0.2;
	}	
	while (x <= 2.4);

	return (0);
}
