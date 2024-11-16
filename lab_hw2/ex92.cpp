#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x = -7.6, y = 0;

	do
	{
		y = log(x*x + 4)/log(3);
		cout << "x: " << x << "\ty: " << y << endl;
		x += 0.3;
	}	while (x <= 8.3);

	return (0);
}
