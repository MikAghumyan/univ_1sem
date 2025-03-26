#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    size_t n;
    double **x, *x_row, count = 0, s = 0;

    cout << "Enter the size of the array: ";
    cin >> n;
    x = new double *[n];
    if (!x)
        return (1);
    for (size_t i = 0; i < n; i++)
    {
        x[i] = new double[n];
        if (!x[i])
        {
            for (size_t j = 0; j < i; j++)
            {
                delete[] x[j];
                x[j] = NULL;
            }
            delete[] x;
            x = NULL;
            return (1);
        }
        for (size_t j = 0; j < n; j++)
        {
            cout << "x[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        x_row = x[i];
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (((int)*x_row) % 4 == 0)
                s += *x_row++;
        }
    }

    cout << count << endl;

    for (size_t i = 0; i < n; i++)
    {
        delete[] x[i];
        x[i] = NULL;
    }
    delete[] x;
    x = NULL;
    return (0);
}