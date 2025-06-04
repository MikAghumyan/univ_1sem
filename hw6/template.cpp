#include <iostream>
using namespace std;

template <typename T>
void f(T x[50][50], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }
    }
}

int main(void)
{
    return (0);
}