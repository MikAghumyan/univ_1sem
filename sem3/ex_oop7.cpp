/*public method voronc irakan masy +
	public method to print
*/

#include <cstring>
#include <iostream>

using namespace	std;

struct			s_worker
{
	char		surname[20];
	double		salary;
	double		bonuses;
};

class C_workers
{
  private:
	s_worker *workers_arr;
	unsigned int n;

  public:
	C_workers(unsigned int _n) : n(_n)
	{
		workers_arr = new s_worker[n];
		if (!workers_arr)
		{
			cerr << "Memory allocation failure" << endl;
			exit(1);
		}
		for (unsigned int i = 0; i < n; i++)
		{
			cout << "Surname: ";
			cin >> workers_arr[i].surname;
			cout << "Salary: ";
			cin >> workers_arr[i].salary;
			cout << "Bonuses: ";
			cin >> workers_arr[i].bonuses;
		}
	}
	~C_workers()
	{
		delete[] workers_arr;
		workers_arr = NULL;
	}
	double worker_income(unsigned int index);
	s_worker *workers_in_range(double min, double max, unsigned int &count);
	void print_workers(s_worker *workers, unsigned int count);
};

double C_workers::worker_income(unsigned int index)
{
	if (index >= n)
		return (0);
	return (workers_arr[index].salary + workers_arr[index].bonuses);
}

s_worker *C_workers::workers_in_range(double min, double max,
	unsigned int &count)
{
	s_worker	*result;
	double		income;

	result = new s_worker[n];
	if (!result)
	{
		cerr << "Memory allocation failure" << endl;
		exit(1);
	}
	count = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		income = worker_income(i);
		if (income >= min && income <= max)
		{
			result[count] = workers_arr[i];
			count++;
		}
	}
	return (result);
}

void C_workers::print_workers(s_worker *workers, unsigned int count)
{
	for (unsigned int i = 0; i < count; i++)
	{
		cout << "Surname: " << workers[i].surname << endl;
		cout << "Salary: " << workers[i].salary << endl;
		cout << "Bonuses: " << workers[i].bonuses << endl;
	}
}

int	main(void)
{
	unsigned int n;
	unsigned int count1, count2;
	s_worker *filtered_workers1, *filtered_workers2;

	cout << "Enter number of workers: ";
	cin >> n;
	C_workers *workers = new C_workers(n);

	filtered_workers1 = workers->workers_in_range(500000, 1000000, count1);
	if (!filtered_workers1)
		return (cerr << "Memory allocation failure" << endl, 1);
	cout << "Workers [500000: 1000000]" << endl;
	workers->print_workers(filtered_workers1, count1);

	filtered_workers2 = workers->workers_in_range(77000, 150000, count2);
	if (!filtered_workers2)
		return (cerr << "Memory allocation failure" << endl, 1);
	cout << "Workers [77000: 150000]" << endl;
	workers->print_workers(filtered_workers2, count2);
	delete[] filtered_workers1;
	delete[] filtered_workers2;
	delete workers;
	return (0);
}