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
		s += pow(x, (4 * n) + 1)/((4 * n) + 1);
	}

	cout << "S: " << s << endl;

	return (0);
}
