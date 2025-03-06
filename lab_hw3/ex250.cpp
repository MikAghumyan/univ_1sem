#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    int arr[n_def], *ptr;
    int n, count = 0;
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

    for (int i = 0; i < n; i += 1)
        if (!(*(ptr + i) % 7))
            count++;

    cout << "count: " << count << endl;

    return 0;
}