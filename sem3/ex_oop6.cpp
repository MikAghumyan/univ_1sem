#include <iostream>

using namespace	std;

struct			student
{
	char		name[50];
	int			points;
};

class StudentsClass
{
  private:
	student *students;
	student topStudents[100];
	int size1, size2;

  public:
	StudentsClass(int s1) : size1(s1)
	{
		students = new student[size1];
		if (students == nullptr)
		{
			cerr << "Memory allocation failed" << endl;
			exit(1);
		}
		for (int i = 0; i < size1; i++)
		{
			cout << "students[" << i << "].name: ";
			cin >> students[i].name;
			cout << "students[" << i << "].points: ";
			cin >> students[i].points;
		}
	}
	~StudentsClass()
	{
		delete[] students;
	}
	int positivePoints(int minPoint)
	{
		size2 = 0;
		for (int i = 0; i < size1; i++)
		{
			if (students[i].points >= minPoint)
			{
				topStudents[size2] = students[i];
				size2++;
			}
		}
		return (size2);
	}
	void printTopStudents(int minPoint)
	{
		int count = positivePoints(minPoint);
		cout << "Top students with points greater than " << minPoint << ":" << endl;
		for (int i = 0; i < count; i++)
			cout << topStudents[i].name << ":" << topStudents[i].points << endl;
	}
};

int	main(void)
{
	int size1, minPoint;
	do
	{
		cout << "size1 (number of students): ";
		cin >> size1;
	} while (size1 < 2 || size1 > 100);
	cout << "minPoint (minimum points to be a top student): ";
	cin >> minPoint;
	StudentsClass sc(size1);
	sc.printTopStudents(minPoint);
	return (0);
}