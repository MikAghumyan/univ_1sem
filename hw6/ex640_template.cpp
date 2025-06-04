#include <iostream>
using namespace std;

template <class T>
void input_matrix(T x[50][50], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "[" << i << "][" << j << "]: ";
            cin >> x[i][j];
        }
    }
}
template <class T1>
int get_min_col(T1 x[50][50], int n)
{
    double min_val = x[0][0];
    int col_i = 0;

    col_i = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] < min_val)
            {
                min_val = x[i][j];
                col_i = j;
            }
        }
    }
    return col_i;
}

int main(void)
{
    int n = 0, col_i;
    double x[50][50];

    do
    {
        cout << "n: ";
        cin >> n;
    } while (n < 1 || n > 50);

    input_matrix(x, n);
    col_i = get_min_col(x, n);
    cout << "The index of the column with the minimum value is: " << col_i << endl;

    return 0;
}