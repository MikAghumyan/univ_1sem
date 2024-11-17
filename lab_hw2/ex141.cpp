#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cout << "x: "; cin >> x;
	cout << "Result:" << endl;

	if(x > 1)
		for(int k = 1; k <= 14; ++k)
		{
			y = 3 * pow(x, k + 1);
			cout << "k: " << k << "\tx: " << x << "\ty: " << y << endl;
		}
	else
		for(int k = 1; k <= 14; ++k)
		{
			y = (5 * x) + pow(k, 7);
			cout << "k: " << k << "\tx: " << x << "\ty: " << y << endl;
		}

	return (0);
}
