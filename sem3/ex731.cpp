#include <iostream>
#include <string.h>

using namespace		std;

struct				s_book
{
	char			author[30];
	unsigned int	pages;
	float			price;
};

void	double_price(s_book *books, s_book *new_books, size_t n, size_t &m,
		unsigned int k)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (books[i].pages > k)
		{
			new_books[m] = books[i];
			new_books[m].price *= 2;
			m++;
		}
	}
}

int	main(void)
{
	s_book books[15], new_books[15];
	size_t i, n, m, k;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 15);

	for (i = 0; i < n; ++i)
	{
		cout << "author: ";
		cin >> books[i].author;
		cout << "pages: ";
		cin >> books[i].pages;
		cout << "price: ";
		cin >> books[i].price;
		cout << endl;
	}

	cout << "k: ";
	cin >> k;
	double_price(books, new_books, n, m, k);
	for (i = 0; i < m; ++i)
		cout << new_books[i].author << " " << new_books[i].pages << " " << new_books[i].price << endl;
}