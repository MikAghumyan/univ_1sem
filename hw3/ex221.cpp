#include <iostream>
using namespace std;

int main(void)
{
	unsigned int n;
	cout << "n: ";
	cin >> n;
	double arr[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "number " << (i + 1) << ": ";
		cin >> arr[i];
	}

	double pos_s = 0;
	int pos_count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > 0)
		{
			pos_s += arr[i];
			++pos_count;
		}
	}

	cout << "Avarage: " << (pos_s / pos_count) << endl;

	return (0);
}

/*
int main(void)
{
	unsigned int n;
	cout << "n: "; cin >> n;
	int s = 0, count = 0;

	for(unsigned int i = 0; i < n; i++)
	{
		int num;
		do{
			cout << "number " << i + 1 << ": ";
			cin >> num;
		while(num <= 0);

		 s += num;
		count++;
	}

	cout << "Avarage: " << (s/count) << endl;

	return (0);
}
*/
