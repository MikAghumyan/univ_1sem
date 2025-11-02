#include <iostream>

using namespace		std;

struct				s_worker
{
	char			surname[20];
	unsigned int	absent_days;
	double			salary;
};

class Workers
{
	s_worker *workers;
	unsigned int n;
	static double total_salary_no_absence;

  public:
	Workers();
	~Workers();
	void print_more_absence(unsigned int min);
	void reduce_ten_percent();
	static double get_total_salary_no_absence()
	{
		return (total_salary_no_absence);
	}
};

double Workers::total_salary_no_absence = 0;

Workers::Workers()
{
	cout << "Enter number of workers: ";
	cin >> n;
	workers = new s_worker[n];
	if (!workers)
	{
		cerr << "Memory allocation failure" << endl;
		exit(1);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		cout << "Surname: ";
		cin >> workers[i].surname;
		cout << "Absent days: ";
		cin >> workers[i].absent_days;
		cout << "Salary: ";
		cin >> workers[i].salary;
		if (workers[i].absent_days == 0)
			total_salary_no_absence += workers[i].salary;
	}
}

Workers::~Workers()
{
	delete[] workers;
}

void Workers::print_more_absence(unsigned int min)
{
	for (unsigned int i = 0; i < n; ++i)
		if (workers[i].absent_days > min)
			cout << workers[i].surname << " " << workers[i].salary << endl;
}
void Workers::reduce_ten_percent()
{
	cout << "reducing salaries by 10%" << endl;
	for (unsigned int i = 0; i < n; ++i)
		if (workers[i].absent_days > 0)
		{
			workers[i].salary *= 0.9;
			cout << workers[i].surname << " new salary: " << workers[i].salary << endl;
		}
}

int	main(void)
{
	Workers company1{}, company2{}, company3{};
	unsigned int min_absence;

	cout << "Enter minimum absent days to filter: ";
	cin >> min_absence;

	company1.print_more_absence(min_absence);
	company1.reduce_ten_percent();
	company2.print_more_absence(min_absence);
	company2.reduce_ten_percent();
	company3.print_more_absence(min_absence);
	company3.reduce_ten_percent();
	cout << "Total salary of workers with no absence in company1: " << Workers::get_total_salary_no_absence() << endl;
	return (0);
}