#include <iostream>
using namespace std;

int main()
{
    int x[4][4], count = 0;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            cout << "x[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (!(x[i][j]))
                count++;

    cout << count << endl;

    return (0);
}