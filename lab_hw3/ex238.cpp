#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    int arr[n_def], *ptr;
    int n, s = 0, k;
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
        if (*(ptr + i) % k == 0)
            s += *(ptr + i);
    }

    cout << "s: " << s << endl;

    return 0;
}