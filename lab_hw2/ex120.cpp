#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int n;

	do {
		cout << "n: "; cin >> n;
	} while(!n);

	double a = 1, b = 1;
	double s = a + b;

	for (unsigned int i = 2; i <= 3*n; i++) {
		a = sin(a);
		b = cos(b + 3);
		s *= a + b;
	}
	cout << "S: " << s << endl;

	return (0);
}
