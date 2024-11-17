#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long int x = 0, y = 0, p = 1;

	for (unsigned int i = 1; i <= 10; i++) {
		x = (i % 5) ? pow(i, 2) : i;
		y = (i % 3) ? 6 : pow(i, 3);
		p *= x * y;
	}
	cout << "P: " << p << endl;

	return (0);
}
