#include <iostream>

using namespace		std;

struct				s_worker
{
	char			name[20];
	unsigned int	children;
};

int	main(void)
{
	s_worker workers[10];
	size_t i, n;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 10);

	for (i = 0; i < n; ++i)
	{
		cout << "name: ";
		cin >> workers[i].name;
		cout << "children: ";
		cin >> workers[i].children;
		cout << endl;
	}

	cout << "workers with children:" << endl;
	for (i = 0; i < n; ++i)
	{
		if (workers[i].children > 0)
		{
			cout << workers[i].name << endl;
		}
	}
}