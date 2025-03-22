#include <iostream>
using namespace std;

int main()
{
    double **a = NULL, *b = NULL;
    size_t n = 0;

    do
    {
        cout << "n: ";
        cin >> n;
    } while (n < 1);

    a = new double *[n];
    if (a == NULL)
    {
        cout << "Memory allocation failed." << endl;
        return 1;
    }
    for (size_t i = 0; i < n; i++)
    {
        a[i] = new double[n];
        if (a[i] == NULL)
        {
            cout << "Memory allocation failed." << endl;
            for (size_t j = 0; j < i; j++)
                delete[] a[j];
            delete[] a;
            a = NULL;
            return 1;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    b = new double[n];
    if (b == NULL)
    {
        cout << "Memory allocation failed." << endl;
        for (size_t i = 0; i < n; i++)
            delete[] a[i];
        delete[] a;
        a = NULL;
        return 1;
    }

    for (int i = 0; i < n; i++)
        b[i] = a[i][i] * (i != n - i - 1) ? a[i][n - i - 1] : 1;

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    for (size_t i = 0; i < n; i++)
        delete[] a[i];
    delete[] a;
    delete[] b;
    a = NULL;
    b = NULL;
    cout << endl;
}