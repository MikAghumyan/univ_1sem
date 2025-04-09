#include <iostream>

using namespace	std;

double	fmid(double *arr1, size_t n1)
{
	double	s;

	s = 0;
	for (size_t i = 0; i < n1; i++)
		s += arr1[i];
	return (s / n1);
}

int	main(void)
{
	size_t i, j, n;
	double *arr, s;

	do
	{
		cout << "Enter the size of the array: ";
		cin >> n;
	} while (n < 1);
	arr = new double[n];
	if (!arr)
		return (1);
	for (i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}

	s = fmid(arr, n);
	cout << "The average of the array is: " << s << endl;

	return (0);
}