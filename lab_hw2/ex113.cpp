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
	while (n < 4);

	double x = 2, y = 1;
	double s = x*x + y;

	for(int i = 5; i <= n; ++i)
	{
		x = x*x - 1;
		y = tan(y);
		s *= x*x + y;
	}

	cout << "S: " << s << endl;

	return (0);
}


