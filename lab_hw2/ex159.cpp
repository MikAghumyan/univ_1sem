#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, s = 0;
	cout << "a: "; cin >> a;

	for (unsigned int i = 1; i <= 8; ++i) {
		double p_i = 1;
		for(unsigned int j = 1; j <= 8; ++j)
		{
			p_i *= cos(a * i + j);
		}
		s += p_i * sin(i * i + 1);
	}
	cout << "S: " << s << endl;

	return (0);
}
