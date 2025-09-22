#include <iostream>
#include <string.h>

using namespace	std;

struct			s_song
{
	char		title[30];
	double		duration;
};

void	filter_songs(s_song *songs, s_song *new_songs, size_t n, size_t &m,
		unsigned int t)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (songs[i].duration <= (double)t)
		{
			new_songs[m] = songs[i];
			m++;
		}
	}
}

int	main(void)
{
	s_song songs[10], new_songs[10];
	size_t i, n, m;

	do
	{
		cout << "n: ";
		cin >> n;
	} while (n < 1 || n > 10);

	for (i = 0; i < n; ++i)
	{
		cout << "title: ";
		cin >> songs[i].title;
		cout << "duration: ";
		cin >> songs[i].duration;
		cout << endl;
	}

	filter_songs(songs, new_songs, n, m, 30);
	for (i = 0; i < m; ++i)
		cout << new_songs[i].title << " " << new_songs[i].duration << endl;
	return (0);
}