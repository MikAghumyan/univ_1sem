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
	s_worker *worker;
	int count = 0;

  public:
	Workers(int _count, s_worker *_worker) : count(_count), worker(_worker)
	{
	}

	void printWorkersWithChildren()
	{
		cout << "Workers with children:\n";
		for (int i = 0; i < count; i++)
			if (worker[i].children > 0)
				cout << "Name: " << worker[i].name << ", \
					Username: "
						<< worker[i].username << ", \
					Children: "
						<< worker[i].children << endl;
	}

	void printWorkersWithSurnameA()
	{
		cout << "Workers with surname A:\n";
		for (int i = 0; i < count; i++)
			if (strncasecmp(worker[i].username, "A", 1) == 0)
				cout << "Name: " << worker[i].name << ", \
                    Username: "
						<< worker[i].username << ", \
                    Children: "
						<< worker[i].children << endl;
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
	for (int i = 0; i < count; i++)
	{
		cout << "Name: ";
		cin >> workers[i].name;
		cout << "Username: ";
		cin >> workers[i].username;
		cout << "Children: ";
		cin >> workers[i].children;
	}
	Workers workersObj(count, workers);
	workersObj.printWorkersWithChildren();
	workersObj.printWorkersWithSurnameA();
	return (0);
}