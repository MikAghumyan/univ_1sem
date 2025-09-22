#include <iostream>

using namespace	std;

struct			s_paragraph
{
	int			number;
	char		name[30];
	int			pages;
};

void	filter_paragraphs(s_paragraph *paragraphs, s_paragraph *new_paragraphs,
		size_t n, size_t &m)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (paragraphs[i].number % 2 == 0)
		{
			new_paragraphs[m] = paragraphs[i];
			m++;
		}
	}
}

int	main(void)
{
	s_paragraph paragraphs[10], new_paragraphs[10];
	size_t i, n, m;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 10);

	for (i = 0; i < n; ++i)
	{
		cout << "number: ";
		cin >> paragraphs[i].number;
		cout << "name: ";
		cin >> paragraphs[i].name;
		cout << "pages: ";
		cin >> paragraphs[i].pages;
		cout << endl;
	}

	filter_paragraphs(paragraphs, new_paragraphs, n, m);
	for (i = 0; i < m; ++i)
		cout << new_paragraphs[i].number << " " << new_paragraphs[i].name << " " << new_paragraphs[i].pages << endl;
	return (0);
}