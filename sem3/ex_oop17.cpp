#include <iostream>

class C_X
{
protected:
    int *x;
    unsigned int n;

public:
    C_X(unsigned int _n) : n{_n}
    {
        x = new int[n];
        if (!x)
        {
            std::cerr << "Memory allocation failure" << std::endl;
            exit(1);
        }
        for (unsigned int i = 0; i < n; i++)
        {
            std::cout << "x[" << i + 1 << "]: ";
            std::cin >> x[i];
        }
    }
    ~C_X()
    {
        delete[] x;
    }
};

class C_Y
{
protected:
    int *y;
    unsigned int n;

public:
    C_Y(unsigned int _n) : n{_n}
    {
        y = new int[n];
        if (!y)
        {
            std::cerr << "Memory allocation failure" << std::endl;
            exit(1);
        }
        for (unsigned int i = 0; i < n; i++)
        {
            std::cout << "y[" << i + 1 << "]: ";
            std::cin >> y[i];
        }
    }
    ~C_Y()
    {
        delete[] y;
    }
};

class C_Z : public C_X, public C_Y
{
private:
    int *z;
    unsigned int n;

public:
    C_Z(unsigned int n) : C_X(n), C_Y(n), n{n}
    {
        z = new int[n];
        if (!z)
        {
            std::cerr << "Memory allocation failure" << std::endl;
            exit(1);
        }
        for (unsigned int i = 0; i < n; i++)
            z[i] = x[i] + y[i];
    }
    ~C_Z()
    {
        delete[] z;
    }
    void print_z()
    {
        std::cout << "z (x[i] + y[i]):" << std::endl;
        for (unsigned int i = 0; i < n; i++)
            std::cout << "z[" << i + 1 << "]: " << z[i] << std::endl;
    }
};

int main(void)
{
    unsigned int n;
    std::cout << "Enter array elements count: ";
    std::cin >> n;
    C_Z z_obj{n};
    z_obj.print_z();
    return (0);
}