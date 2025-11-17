#include <iostream>

struct s_worker
{
    std::string name;
    unsigned int children;
    double salary;
};

class C_Workers
{
protected:
    s_worker *workers;
    unsigned int n;

public:
    C_Workers(unsigned int _n) : n{_n}
    {
        workers = new s_worker[n];
        if (!workers)
        {
            std::cerr << "Memory allocation failure" << std::endl;
            exit(1);
        }
        for (unsigned int i = 0; i < n; i++)
        {
            std::cout << "Name " << i + 1 << ": ";
            std::cin >> workers[i].name;
            std::cout << "Children " << i + 1 << ": ";
            std::cin >> workers[i].children;
            std::cout << "Salary " << i + 1 << ": ";
            std::cin >> workers[i].salary;
        }
    }
    ~C_Workers()
    {
        delete[] workers;
    }
};

class C_Workers_with_children : public C_Workers
{
public:
    void print_workers_with_children()
    {
        std::cout << "Workers with children:" << std::endl;
        for (unsigned int i = 0; i < n; i++)
        {
            if (workers[i].children > 1)
            {
                std::cout << "Name: " << workers[i].name
                          << ", Children: " << workers[i].children
                          << ", Salary: " << workers[i].salary << std::endl;
            }
        }
    }
};

class C_Lower_Salary : public C_Workers
{
public:
    void print_workers_with_lower_salary(double k)
    {
        std::cout << "Workers with salary less than " << k << ":" << std::endl;
        for (unsigned int i = 0; i < n; i++)
        {
            if (workers[i].salary < k)
            {
                std::cout << "Name: " << workers[i].name
                          << ", Children: " << workers[i].children
                          << ", Salary: " << workers[i].salary << std::endl;
            }
        }
    }
};

int main(void)
{
    unsigned int n;

    std::cout << "Enter number of workers: ";
    std::cin >> n;
    C_Workers_with_children wc{n};
    wc.print_workers_with_children();

    double k;
    std::cout << "Enter min salary: ";
    std::cin >> k;
    C_Lower_Salary ls{n};
    ls.print_workers_with_lower_salary(k);

    return 0;
}