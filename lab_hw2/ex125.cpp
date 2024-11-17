#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int n;
	double x, s = 0;

	do {
		cout << "n: "; cin >> n;
	} while(!n);
	cout << "x: "; cin >> x;
	
	for (unsigned int i = 1; i <= n; i++) {
		s += i/(pow(4, n) + pow(abs(x), n + 2));
	}
	cout << "S: " << s << endl;

	return (0);
}
