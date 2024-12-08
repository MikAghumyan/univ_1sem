#include <iostream>
using namespace std;

int main()
{
	const int n_def = 50;
	int i, n, s = 0, x[n_def], y[n_def];

	do
	{
		cout << "n[2," << n_def << "]: ";
		cin >> n;
	} while (n < 2 || n > n_def);

	for (i = 0; i < n; ++i)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	for (i = 0; i < n; ++i)
	{
		cout << "y[" << i << "]: ";
		cin >> y[i];
	}

	for (i = 0; i < n; ++i)
	{
		s += (x[i] % 7) ? 0 : x[i];
		s += (y[i] % 7) ? 0 : y[i];
	}
	cout << "S: " << s << endl;

	return (0);
}
