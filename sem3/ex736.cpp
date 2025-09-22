#include <iostream>
#include <string.h>

using namespace	std;

struct			s_exam
{
	char		subject[30];
	char		date[11];
};

void	filter_exams(s_exam *exams, s_exam *new_exams, size_t n, size_t &m,
		const char *d)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (strcmp(exams[i].date, d) == 0)
		{
			new_exams[m] = exams[i];
			m++;
		}
	}
}

int	main(void)
{
	s_exam exams[10], new_exams[10];
	size_t i, n, m;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 10);

	for (i = 0; i < n; ++i)
	{
		cout << "subject: ";
		cin >> exams[i].subject;
		cout << "date: ";
		cin >> exams[i].date;
		cout << endl;
	}

	filter_exams(exams, new_exams, n, m, "Saturday");
	for (i = 0; i < m; ++i)
		cout << new_exams[i].subject << " " << new_exams[i].date << endl;
	return (0);
}