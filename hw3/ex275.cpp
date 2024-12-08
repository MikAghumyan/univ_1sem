#include <iostream>
using namespace std;

int main()
{
    const int def_n = 50;
    int n, i = 0;
    double x[def_n], y[def_n], x_s = 0, y_p = 1;

    do
    {
        cout << "n[1," << def_n << "]:\t";
        cin >> n;
    } while (n < 2 || n > def_n);

    while (i < n)
    {
        cout << "x[" << i << "]:\t";
        cin >> x[i];
        ++i;
    }
    i = 0;
    while (i < n)
    {
        cout << "y[" << i << "] (not 0):\t";
        cin >> y[i];
        if (y[i])
            i++;
    }

    for (i = 0; i < n; ++i)
    {
        x_s += x[i];
        y_p *= y[i];
    }

    cout << (x_s / y_p);

    return 0;
}