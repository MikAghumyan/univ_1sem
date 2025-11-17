#include <iostream>

using namespace std;

struct s_complex
{
    double x;
    double y;
};

class ComplexNumbers
{
protected:
    s_complex *complex_numbers;
    s_complex *complex_numbers2;
    s_complex complex_numbers3[20];
    unsigned int n;
    unsigned int n1;
    s_complex count_sum_1();

public:
    ComplexNumbers()
    {
        do
        {
            cout << "Enter number of complex numbers: ";
            cin >> n;
        } while (n == 0 || n > 10);
        n1 = 0;
        complex_numbers = new s_complex[n];
        complex_numbers2 = new s_complex[n];
        if (!complex_numbers || !complex_numbers2)
        {
            cerr << "Memory allocation failure" << endl;
            exit(1);
        }
        for (unsigned int i = 0; i < n; i++)
        {
            cout << "Enter real part of complex number " << i + 1 << ": ";
            cin >> complex_numbers[i].x;
            cout << "Enter imaginary part of complex number " << i + 1 << ": ";
            cin >> complex_numbers[i].y;
        }
        for (unsigned int i = 0; i < n; i++)
        {
            cout << "Enter real part of complex number " << i + 1 << ": ";
            cin >> complex_numbers[i].x;
            cout << "Enter imaginary part of complex number " << i + 1 << ": ";
            cin >> complex_numbers[i].y;
        }
    }
    ~ComplexNumbers()
    {
        delete[] complex_numbers;
        delete[] complex_numbers2;
    }
    void print_complex_numbers_3();
};

s_complex ComplexNumbers::count_sum_1()
{
    s_complex sum = {0.0, 0.0};
    for (unsigned int i = 0; i < n; i++)
    {
        sum.x += complex_numbers[i].x;
        sum.y += complex_numbers[i].y;
    }
    return sum;
}

void ComplexNumbers::print_complex_numbers_3()
{
    for (unsigned int i = 0; i < n1; i++)
    {
        cout << "Complex number " << i + 1 << ": "
             << complex_numbers3[i].x << " + " << complex_numbers3[i].y << "i" << endl;
    }
}

class ComplexNumbers2 : public ComplexNumbers
{
private:
    int k;

public:
    ComplexNumbers2(int _k) : k(_k) {}
    void add_to_cnbr3();
};

void ComplexNumbers2::add_to_cnbr3()
{
    s_complex sum1 = count_sum_1();
    for (unsigned int i = 0; i < n; i++)
    {
        if (complex_numbers2[i].x > k)
        {
            complex_numbers3[n1].x = complex_numbers[i].x + sum1.x;
            complex_numbers3[n1].y = complex_numbers[i].y + sum1.y;
            n1++;
        }
    }
}

int main()
{
    int k;
    cout << "Enter threshold k: ";
    cin >> k;
    ComplexNumbers2 cn2(k);
    cn2.add_to_cnbr3();
    cout << "Complex numbers in array 3:" << endl;
    cn2.print_complex_numbers_3();
    return 0;
}