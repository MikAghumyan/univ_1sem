#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	cout << "x: "; cin >> x;
	cout << "Result:" << endl;

	int k = 2;
	if(x <= 3)
		while(k <= 10)
		{
			y = x + pow(k, 4);
			cout << "k: " << k << "\tx: " << x << "\ty: " << y << endl;
			++k;
		}
	else if (x < 5)
		while(k <= 10)
		{
			y = pow(x, k + 6);
			cout << "k: " << k << "\tx: " << x << "\ty: " << y << endl;
			++k;
		}
	else
		while(k <= 10)
		{
			y = pow(5, 6);
			cout << "k: " << k << "\tx: " << x << "\ty: " << y << endl;
			++k;
		}

	return (0);
}
