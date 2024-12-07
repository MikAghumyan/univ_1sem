#include <iostream>
using namespace std;

int main(void)
{
	double x;
	int n;
	unsigned long long int factorial = 1;
	cout << "n:\t"; cin >> n;
	cout << "x:\t"; cin >> x;
	long double s = x;

	for(int i = 1; i <= n; ++i){
		for(int j = (2 * (i - 1)) + 2; j <= (2 * i) + 1; ++j )
		{
			factorial *= j;
			cout << j << '\t';
		}
		cout << "factorial: " << factorial << endl;
		s += x / factorial;
	}

	cout << "S:\t" << s << endl;

	return (0);
}
