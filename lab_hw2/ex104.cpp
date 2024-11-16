#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int n;
	do
	{
		cout << "n: "; cin >> n;
	}
	while (n < 0);

	double x = -4.2;
	double s = x*x + 2*x;

	for(int i = 1; i <= n; ++i)
	{
		x = 1/tan(x);
		s += x*x + 2*x;
	}

	cout << "S: " << s << endl;

	return (0);
}
