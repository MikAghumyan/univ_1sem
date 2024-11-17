#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	unsigned int n;
	do
	{
		cout << "n: "; cin >> n;
	}
	while (!n);

	int x = 1, y = 1;
	int s = (x * x) + y;

	for(unsigned int i = n; i <= 2*n; ++i)
	{
		x = abs(x + 3) * 5;
		y = (5 * y) + 2;
		s += x + (y * y);
	}

	cout << "S: " << s << endl;

	return (0);
}
