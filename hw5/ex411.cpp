#include <iostream>
using namespace std;

int main()
{
    size_t n = 0, count = 0;
    unsigned int **x, k, *x_row;

    cout << "Enter the size of the array: ";
    cin >> n;
    x = new unsigned int *[n];
    if (!x)
        return (1);
    for (size_t i = 0; i < n; i++)
    {
        x[i] = new unsigned int[n];
        if (!x[i])
        {
            for (size_t j = 0; j < i; j++)
                delete[] x[j];
            delete[] x;
            return (1);
        }
        for (size_t j = 0; j < n; j++)
        {
            cout << "x[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }
    }

    cout << "k: ";
    cin >> k;
    for (size_t i = 1; i < n; i++)
    {
        x_row = x[i];
        for (size_t j = 0; j < i; j++)
            if (x_row[j] % k == 0)
                count++;
    }
    cout << count << endl;

    for (size_t i = 0; i < n; i++)
        delete[] x[i];
    delete[] x;
    x = NULL;
    return (0);
}