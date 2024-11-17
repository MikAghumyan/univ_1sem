#include <iostream>
using namespace std;

int main()
{
	double n, p = 1;
	cout << "n: "; cin >> n;

	for (unsigned int i = 0; i <= 15; ++i) {
		double p_i = 1;
		for(unsigned int m = 1; m <= 6; ++m)
		{
			p_i *= i / (i + (m * n));
		}
		p *= p_i;
	}
	cout << "P: " << p << endl;

	return (0);
}
