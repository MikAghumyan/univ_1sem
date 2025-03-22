#include <iostream>
using namespace std;

void free_matrix(double ***x, size_t n)
{
}

int main()
{
    double **x = NULL, **px;
    size_t n = 0, count = 0;

    do
    {
        cout << "n: ";
        cin >> n;
    } while (!n);

    try
    {
        x = new double *[n];
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
        return (1);
    }

    px = x;
    for (int i = 0; i < n; i++)
    {
        *px = new double[n];
        if (!*px)
        {
            while (px >= x)
                delete *px++;
            delete px;
            px = NULL;
            x = NULL;
            cerr << "Memory Allocation Error" << endl;
            return (1);
        }

        for (int j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]" << endl;
            cin >> *px[j];
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 2; j < i; j += 2)
            if (x[i][j])
                count++;
    }

    return (0);
}