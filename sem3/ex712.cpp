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
	size_t i;
	s_student students[5];
	int evals_sum = 0;

	for (i = 0; i < 5; ++i)
	{
		cout << "name: ";
		cin >> students[i].name;
		cout << "surname: ";
		cin >> students[i].surname;
		cout << "evals: ";
		cin >> students[i].eval;
		evals_sum += students[i].eval;
		cout << endl;
	}

	cout << "student surname eval";
	for (i = 0; i < 5; ++i)
	{
		if (students[i].eval > evals_sum / 5)
			cout << students[i].name << " " << students[i].surname << " " << students[i].eval << endl;
	}
	return (0);
}