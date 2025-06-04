#include <iostream>
using namespace std;

void input_matrix(double **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}

void get_min_col(double **a, int n, int &col_i)
{
    double min_val = a[0][0];

    col_i = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < min_val)
            {
                min_val = a[i][j];
                col_i = j;
            }
        }
    }
}

void free_matrix(double **a, int n)
{
    for (int j = 0; j < n; j++)
    {
        delete[] a[j];
        a[j] = NULL;
    }
    delete[] a;
    a = NULL;
}

int main(void)
{
    double **a = NULL, *b = NULL;
    int n = 0, col_i, i;

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

    for (i = 0; i < n; i++)
    {
        a[i] = new double[n];
        if (a[i] == NULL)
        {
            cout << "Memory allocation failed." << endl;
            free_matrix(a, n);
            return 1;
        }
    }

    input_matrix(a, n);
    b = new double[n];
    if (!b)
    {
        cout << "Memory allocation failed." << endl;
        free_matrix(a, n);
        return 1;
    }
    get_min_col(a, n, col_i);

    for (i = 0; i < n; i++)
        b[i] = a[i][col_i];
    free_matrix(a, n);

    for (i = 0; i < n; i++)
        cout << b[i] << " : ";
    cout << endl;
    delete[] b;
    return (0);
}