#include <iostream>
using namespace std;

int main()
{
    double x[20][20], b[20];
    int n = 0;

    do
    {
        cout << "Enter the size of the array (1-20): ";
        cin >> n;
    } while (n < 1 || n > 20);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "x[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }

    for (int i = 0; i < n; i++)
        b[i] = x[i][i] * (i != n - i - 1) ? x[i][n - i - 1] : 1;

    for (int i = 0; i < n; i++)
        cout << b[i] << " ";
    cout << endl;

    return (0);
}