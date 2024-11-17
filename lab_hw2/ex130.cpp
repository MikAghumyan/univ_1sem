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
	
	for (unsigned int i = 0; i <= n; i++) {
		s += (pow(4, (i + 1)) * pow((x + 1), i))/(n*n + 2*n + 3);
	}

	cout << "S: " << s << endl;

	return (0);
}
