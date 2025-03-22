#include <iostream>
using namespace std;

int main()
{
    double x[20][20], s = 0;
    int n = 0, count = 0;

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

    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (x[i][j] < 0)
            {
                s += x[i][j];
                count++;
            }

    if (count)
        cout << s / count << endl;
    else
        cout << "No negative numbers found." << endl;

    return (0);
}