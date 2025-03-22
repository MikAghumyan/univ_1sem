#include <iostream>
using namespace std;

int main()
{
    int x[20][20], count = 0, n = 0;

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
        for (int j = 0; j < i; j++)
            if (!(x[i][j] % 2))
                count++;
    
    cout << count << endl;
    
    return (0);
}