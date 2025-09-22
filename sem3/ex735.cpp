#include <iostream>

using namespace	std;

struct			s_course
{
	char		name[30];
	double		rating;
	double		grade;
};

void	filter_courses(s_course *courses, s_course *new_courses, size_t n,
		size_t &m, double a, double b)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (courses[i].rating >= (double)a && courses[i].grade > (double)b)
		{
			new_courses[m] = courses[i];
			m++;
		}
	}
}

int	main(void)
{
	int i, a, b;
	size_t n, m;

	s_course courses[10], new_courses[10];
	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 10);

	for (i = 0; i < n; ++i)
	{
		cout << "name: ";
		cin >> courses[i].name;
		cout << "rating: ";
		cin >> courses[i].rating;
		cout << "grade: ";
		cin >> courses[i].grade;
		cout << endl;
	}
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	filter_courses(courses, new_courses, n, m, a, b);
	for (i = 0; i < m; ++i)
		cout << new_courses[i].name << " " << new_courses[i].rating << " " << new_courses[i].grade << endl;
	return (0);
}