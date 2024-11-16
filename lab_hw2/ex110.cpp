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

	double x = 1;
	double s = x;

	for(int i = n - 1; i >= 0; --i)
	{
		x = 1/tan(x) + 1;
		s *= x;
	}

	cout << "S: " << s << endl;

	return (0);
}

