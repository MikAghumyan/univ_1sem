#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x = 2.4;
	double y = 0;

	while (x <= 7.6) {
		y = tan(2*x + x*x);
		cout << "x: " << x << "\ty: " << y << endl;
		x += 0.2;
	}
	return (0);
}
