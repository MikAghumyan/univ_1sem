#include <iostream>
using namespace std;

int main(void)
{
	const int n_def = 50;
    double arr[n_def], *ptr;
	unsigned int n;
	do
    {
        cout << "n: ";
        cin >> n;
    } while (n < 2 || n > n_def);

	ptr = arr;
	for (int i = 0; i < n; ++i)
	{
		cout << "number " << (i + 1) << ": ";
		cin >> *(ptr + i);
	}

	double pos_s = 0;
	int pos_count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(ptr + 1) > 0)
		{
			pos_s += *(ptr + 1);
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
