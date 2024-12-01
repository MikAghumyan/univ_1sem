#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    int arr[n_def];
    int n, s = 0, k;
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
        if (arr[i] % k == 0)
            s += arr[i];
    }

    cout << "s: " << s << endl;

    return 0;
}