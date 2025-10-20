#include <iostream>

using namespace	std;

class ArrClass
{
  private:
	int *arr;
	int size;

  public:
	ArrClass(int s) : size(s)
	{
		arr = new int[size];
		if (arr == NULL)
		{
			cerr << "Memory allocation failed" << endl;
			exit(1);
		}
		for (int i = 0; i < size; i++)
		{
			cout << "arr[" << i << "]: ";
			cin >> arr[i];
		}
	}
	~ArrClass()
	{
		delete[] arr;
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
	ArrClass ac(size);
	ac.printMaxMin();
	return (0);
}