#include <iostream>

using namespace			std;

enum					e_patient_status
{
	HEALTHY,
	SURGERED,
	AMBULATORY,
};

struct					s_patient
{
	char				surname[20];
	unsigned int		age;
	e_patient_status	status;
};

class Patients
{
	s_patient *patients;
	unsigned int n;
	static unsigned int healthy_adult_count;

  public:
	Patients();
	~Patients();
	void print_ambulatory();
	int count_surgered();
	static unsigned int get_healthy_count()
	{
		return (healthy_adult_count);
	}
};

unsigned int Patients::healthy_adult_count = 0;

Patients::Patients()
{
	int	status_input;

	cout << "Enter number of patients: ";
	cin >> n;
	patients = new s_patient[n];
	if (!patients)
	{
		cerr << "Memory allocation failure" << endl;
		exit(1);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		cout << "Surname: ";
		cin >> patients[i].surname;
		cout << "Age: ";
		cin >> patients[i].age;
		cout << "Status: ";
		cin >> status_input;
		patients[i].status = static_cast<e_patient_status>(status_input);
		if (patients[i].status == HEALTHY && patients[i].age >= 18)
			healthy_adult_count++;
	}
}

Patients::~Patients()
{
	delete[] patients;
}

void Patients::print_ambulatory()
{
	for (unsigned int i = 0; i < n; i++)
	{
		if (patients[i].status == AMBULATORY)
		{
			cout << "Surname: " << patients[i].surname;
			cout << "Age: " << patients[i].age << endl;
		}
	}
}

int Patients::count_surgered()
{
	int	surgered_count;

	surgered_count = 0;
	for (unsigned int i = 0; i < n; i++)
		if (patients[i].status == SURGERED)
			surgered_count++;
	return (surgered_count);
}

int	main(void)
{
	Patients patients1, patients2, patients3;

	patients1.print_ambulatory();
	patients2.print_ambulatory();
	patients3.print_ambulatory();
	cout << "Healthy adult patients count: " << Patients::get_healthy_count() << endl;
	cout << "Number of surgered patients: " << patients1.count_surgered()
		+ patients2.count_surgered() + patients3.count_surgered() << endl;
	return (0);
}