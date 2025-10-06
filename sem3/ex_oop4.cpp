#include <iostream>

using namespace	std;

class ArrClass
{
  private:
	int *arr;
	int size;

  public:
	ArrClass(int *arr, int s) : arr(arr), size(s)
	{
	}
	int negativeCount()
	{
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				count++;
			}
		}
		return (count);
	}
	void printMaxMin()
	{
		int max = arr[0];
		int min = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		if (negativeCount() > 0)
			cout << "Max: " << max << endl;
		else
			cout << "Min: " << min << endl;
	}
};

int	main(void)
{
	int arr[100];
	int size;

	do
	{
		cout << "size: ";
		cin >> size;
	} while (size < 2 || size > 100);
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}
	ArrClass ac(arr, size);
	ac.printMaxMin();
	return (0);
}