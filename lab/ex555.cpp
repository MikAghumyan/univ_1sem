#include <iostream>
using namespace std;

void f(int x[50][50], int n, int m)
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
void f(int x[50][50], int n, int m, int &min_i)
{
    min_i = -1;
    for (int i = 0; i < m; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (x[j][i] >= 0)
                break;
        }
        if (j == n)
        {
            min_i = i;
            break;
        }
    }
}

void f(int x[50][50], int n, int m, int *min_i)
{
    for (int i = 0; i < m; i++)
    {
        int temp = x[i][*min_i];
        x[i][*min_i] = x[i][m - 1];
        x[i][m - 1] = temp;
    }
}

int main(void)
{
    int x[50][50], n, m, min_i;

    do
    {
        cout << "n: ";
        cin >> n;
    } while (n < 1 || n > 50);
    do
    {
        cout << "m: ";
        cin >> m;
    } while (m < 1 || m > 50);
    f(x, n, m);
    f(x, n, m, min_i);
    if (min_i == -1)
        cout << "No column with all negative elements." << endl;
    else
    {
        f(x, n, m, &min_i);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "[" << i << "][" << j << "]: " << x[i][j] << endl;
            }
        }
    }

    return 0;
}