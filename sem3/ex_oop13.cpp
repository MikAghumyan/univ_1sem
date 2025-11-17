#include <iostream>

using namespace		std;

enum				e_preference
{
	HUMANITARIAN = 1,
	NATURAL = 2,
};

struct				s_student
{
	char			surname[20];
	e_preference	preference;
	bool			has_award;
	float			scholarship;
};

class Students
{
	s_student *students;
	unsigned int n;
	static float total_scholarship_without_award;

  public:
	Students();
	~Students();
	void print_with_award();
	int count_awards();
	static float get_total_scholarship_without_award()
	{
		return (total_scholarship_without_award);
	}
};

float Students::total_scholarship_without_award = 0;

Students::Students()
{
	int	preference_input;

	cout << "Enter number of students: ";
	cin >> n;
	students = new s_student[n];
	if (!students)
	{
		cerr << "Memory allocation failure" << endl;
		exit(1);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		cout << "Surname: ";
		cin >> students[i].surname;
		cout << "Preference: ";
		cin >> preference_input;
		students[i].preference = static_cast<e_preference>(preference_input);
		cout << "Has award: ";
		cin >> students[i].has_award;
		cout << "Scholarship: ";
		cin >> students[i].scholarship;
		if (!students[i].has_award)
			total_scholarship_without_award += students[i].scholarship;
	}
}
Students::~Students()
{
	delete[] students;
}

void Students::print_with_award()
{
	for (unsigned int i = 0; i < n; ++i)
		if (students[i].has_award)
			cout << students[i].surname << " " << students[i].scholarship << endl;
}

int Students::count_awards()
{
	int	award_count;

	award_count = 0;
	for (unsigned int i = 0; i < n; ++i)
		if (students[i].has_award)
			award_count++;
	return (award_count);
}

int	main(void)
{
	Students students1, students2;
	students1.print_with_award();
	cout << "With awards1:" << students1.count_awards() << endl;
	students2.print_with_award();
	cout << "With awards2: " << students2.count_awards() << endl;
	cout << "Total scholarship without awards: " << Students::get_total_scholarship_without_award() << endl;

	return (0);
}