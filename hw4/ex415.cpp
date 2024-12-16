#include <iostream>
using namespace std;

int main()
{
    int x[4][4], count = 0;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            cout << "x[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }

    for (int i = 1; i < 10; i++)
        for (int j = 0; j < i; j++)
            if (!(x[i][j] % 2))
                count++;

    cout << count << endl;

    return (0);
}