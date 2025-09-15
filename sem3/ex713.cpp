#include <iostream>

using namespace	std;

struct			s_student
{
	char		name[20];
	char		surname[30];
	int			eval;
};

int	main(void)
{
	size_t i, n;
	s_student students[20];

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 20);

	for (i = 0; i < n; ++i)
	{
		cout << "name: ";
		cin >> students[i].name;
		cout << "surname: ";
		cin >> students[i].surname;
		do
		{
			cout << "evals: ";
			cin >> students[i].eval;
		} while (students[i].eval < 0 || students[i].eval > 100);
		cout << endl;
	}

	cout << "student surname eval";
	for (i = 0; i < n; ++i)
	{
		if (students[i].eval >= 40 && students[i].eval <= 100)
			cout << students[i].name << " " << students[i].surname << " " << students[i].eval << endl;
	}
	return (0);
}