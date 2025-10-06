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
	int negativeMiddle()
	{
		int sum = 0;
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < 0)
			{
				sum += arr[i];
				count++;
			}
		}
		if (count == 0)
			return (0);
		return (sum / count);
	}
	void biggerThanMiddle()
	{
		int middle = negativeMiddle();
		cout << "Elements bigger than middle (" << middle << "): ";
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > middle)
			{
				cout << arr[i] << " ";
			}
		}
		cout << endl;
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
	ac.biggerThanMiddle();
	return (0);
}