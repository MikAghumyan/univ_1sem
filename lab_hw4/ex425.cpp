#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    double x[20][20], s = 0;

    do {
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
        for (int j = n - 1; j > n - i; j++)
                if (abs(x[i][j]) >= 5.4 && abs(x[i][j]) <= 15.3)
                    s += x[i][j];
                    
    cout << s << endl;
    
    return (0);
}