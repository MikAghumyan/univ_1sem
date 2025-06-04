#include <cmath>
#include <iostream>

using namespace	std;

double	get_max(double arr[], int n)
{
	double	max;

	max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return (max);
}
int	index_multiply(double arr[], int n, double x)
{
	int	res;

	res = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			res *= i;
	}
	return (res);
}

int	main(void)
{
	double *arr, max;
	int n, result;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 2);

	arr = new double[n];
	if (!arr)
	{
		cout << "Memory allocation failed" << endl;
		return (1);
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Enter element " << i + 1 << ": ";
		cin >> arr[i];
	}
	max = get_max(arr, n);
	result = index_multiply(arr, n, max);
	cout << "The result is: " << result << endl;
	delete[] arr;
	return (0);
}