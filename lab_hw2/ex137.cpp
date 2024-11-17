#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long double x = 0, y = 0, p = 1;

	for (unsigned int i = 1; i <= 17; i++) {
		x = (i % 2) ? pow(sin(i), 2) : 0;
		y = (i % 2) ? tan(i) : 1 / tan(i);
		p *= x * x * y;
	}
	cout << "P: " << p << endl;
	
	return (0);
}
