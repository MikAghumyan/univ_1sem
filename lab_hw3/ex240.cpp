#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    double arr[n_def], *ptr;
    int n, k, count = 0;
    double s = 0;
    do
    {
        cout << "n: ";
        cin >> n;
    } while (n < 2 || n > n_def);

    ptr = arr;
    for (int i = 0; i < n; ++i)
    {
        cout << "number[" << i << "]: ";
        cin >> *(ptr + i);
    }

    cout << "k: ";
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (int(*(ptr + i)) % k == 0)
        {
            s += *(ptr + i) * *(ptr + i);
            ++count;
        }
    }

    cout << "Avarage: " << (s / count) << endl;

    return 0;
}