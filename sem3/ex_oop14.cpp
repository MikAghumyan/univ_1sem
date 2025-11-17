#include <iostream>

using namespace std;

struct s_student
{
    char surname[20];
    unsigned int eval;
    unsigned int absences;
    double scholarship;
};

class Students
{
protected:
    s_student *students;
    unsigned int n;

public:
    Students();
    ~Students();
};

class Students1 : public Students
{
protected:
    unsigned int h;

public:
    Students1(unsigned int _h) : h(_h) {}
    void add_scholarship_no_absence(void);
    void print_students();
};

Students::Students()
{
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
        cout << "Evaluation (0-100): ";
        cin >> students[i].eval;
        cout << "Number of absences: ";
        cin >> students[i].absences;
        cout << "Scholarship amount: ";
        cin >> students[i].scholarship;
    }
}

Students::~Students()
{
    delete[] students;
}

void Students1::add_scholarship_no_absence(void)
{
    for (unsigned int i = 0; i < n; i++)
    {
        if (students[i].absences == h)
        {
            students[i].scholarship *= 1.05;
        }
    }
}

void Students1::print_students(void)
{
    for (unsigned int i = 0; i < n; i++)
        cout << "Student: " << students[i].surname << " Eval: " << students[i].eval
             << " Absences: " << students[i].absences
             << " Scholarship: " << students[i].scholarship << endl;
}

int main(void)
{
    unsigned int h;
    cout << "h: ";
    cin >> h;
    Students1 students_obj(h);

    students_obj.add_scholarship_no_absence();
    students_obj.print_students();
    return (0);
}