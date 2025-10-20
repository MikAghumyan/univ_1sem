#include <cstring>
#include <iostream>

using namespace		std;

struct				s_worker
{
	char			name[20];
	char			username[20];
	unsigned int	children;
};

class Workers
{
  private:
	s_worker *workers;
	int count = 0;

  public:
	Workers(int _count) : count(_count)
	{
		workers = new s_worker[count];
		if (!workers)
		{
			cerr << "Memory allocation failure" << endl;
			exit(1);
		}
		for (int i = 0; i < count; i++)
		{
			cout << "Name: ";
			cin >> workers[i].name;
			cout << "Username: ";
			cin >> workers[i].username;
			cout << "Children: ";
			cin >> workers[i].children;
		}
	}
	~Workers()
	{
		delete[] workers;
		workers = NULL;
	}

	void printWorkersWithChildren()
	{
		cout << "Workers with children:\n";
		for (int i = 0; i < count; i++)
			if (workers[i].children > 0)
			{
				cout << "Name: " << workers[i].name;
				cout << "Username: " << workers[i].username;
				cout << "Children: " << workers[i].children << endl;
			}
	}

	void printWorkersWithSurnameA()
	{
		cout << "Workers with surname A:\n";
		for (int i = 0; i < count; i++)
			if (strncasecmp(workers[i].username, "A", 1) == 0)
			{
				cout << "Name: " << workers[i].name;
				cout << "Username: " << workers[i].username;
				cout << "Children: " << workers[i].children << endl;
			}
	}
};

int	main(void)
{
	s_worker workers[100];
	int count;

	do
	{
		cout << "count: ";
		cin >> count;
	} while (count < 2 || count > 100);
	Workers *workersObj = new Workers(count);
	workersObj->printWorkersWithChildren();
	workersObj->printWorkersWithSurnameA();
	return (0);
}