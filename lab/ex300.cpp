#include <iostream>
using namespace std;

int main()
{
	double *x = NULL, *y = NULL;
	size_t n = 0, n_y = 0;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1);

	x = new double[n];
	if (!x)
	{
		cout << "Memory allocation error!" << endl;
		return 1;
	}

	for (size_t i = 0; i < n; i++)
	{
		cout << "x[" << i << "]: ";
		cin >> *(x + i);
	}

	for (size_t i = 0; i < n; i++)
		if ((int)x[i] % 6 == 1)
			n_y++;

	y = new double[n_y];
	if (!y)
	{
		delete[] x;
		x = NULL;
		cout << "Memory allocation error!" << endl;
		return 1;
	}

	for (size_t i = 0, j = 0; i < n; i++)
		if ((int)x[i] % 6 == 1)
			y[j++] = x[i];

	for (size_t i = 0; i < n_y; i++)
		cout << "y[" << i << "]: " << y[i] << endl;

	delete[] x;
	x = NULL;
	delete[] y;
	y = NULL;

	return 0;
}
