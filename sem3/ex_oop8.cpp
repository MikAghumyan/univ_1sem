#include <iostream>

using namespace		std;

struct				s_pensioner
{
	char			surname[20];
	double			pension;
	unsigned int	experience;
};

class C_pensioners
{
	s_pensioner *pensioners;
	unsigned int n;
	static unsigned int no_experience_count;

  public:
	C_pensioners(unsigned int _n) : n(_n)
	{
		pensioners = new s_pensioner[n];
		if (!pensioners)
		{
			cerr << "Memory allocation failure" << endl;
			exit(1);
		}
		for (unsigned int i = 0; i < n; i++)
		{
			cout << "Surname: ";
			cin >> pensioners[i].surname;
			cout << "Pension: ";
			cin >> pensioners[i].pension;
			cout << "Experience: ";
			cin >> pensioners[i].experience;
			if (pensioners[i].experience == 0)
				no_experience_count++;
		}
	}
	~C_pensioners()
	{
		delete[] pensioners;
		pensioners = NULL;
	}
	void print_more_exp(unsigned int min)
	{
		for (int i = 0; i < n; ++i)
			if (pensioners[i].experience > min)
				cout << pensioners[i].surname << " " << pensioners[i].pension << endl;
	}
	static unsigned int get_no_experience_count()
	{
		return (no_experience_count);
	}
};
unsigned int C_pensioners::no_experience_count;

int	main(void)
{
	unsigned int n1, n2, min_exp;
	cout << "n:";
	cin >> n1;
	cout << "n2: ";
	cin >> n2;
	C_pensioners pensioners1(n1), pensioners2(n2);
	cout << "Min experience: ";
	cin >> min_exp;
	cout << "Pensioners with more than " << min_exp << " years of experience:" << endl;
	pensioners1.print_more_exp(min_exp);
	pensioners2.print_more_exp(min_exp);
	cout << "no experience: " << C_pensioners::get_no_experience_count() << endl;
	return (0);
}
