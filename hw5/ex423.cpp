#include <iostream>
using namespace std;

int main()
{
    size_t n = 0, count = 0;
    double **x, *x_row, a, b;

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
                delete[] x[j];
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

    do
    {
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
    } while (a <= b);

    for (size_t i = 0; i < n; i++)
    {
        x_row = x[i];
        for (size_t j = 0; j < n - 1 - i; j++)
            if (x_row[j] > a && x_row[j] < b)
                count++;
    }

    cout << count << endl;

    for (size_t i = 0; i < n; i++)
        delete[] x[i];
    delete[] x;
    x = NULL;
    return (0);
}