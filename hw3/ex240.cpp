#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    double arr[n_def];
    int n, k, count = 0;
    double s = 0;
    do
    {
        cout << "n: ";
        cin >> n;
    } while (n < 2 || n > n_def);

    for (int i = 0; i < n; ++i)
    {
        cout << "number[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "k: ";
    cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (int(arr[i]) % k == 0)
        {
            s += arr[i] * arr[i];
            ++count;
        }
    }

    cout << "Avarage: " << (s / count) << endl;

    return 0;
}