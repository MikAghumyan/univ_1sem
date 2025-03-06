#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    int arr[n_def], *ptr;
    int n, count = 0, a, b;
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

    cout << "a: ";
    cin >> a;
    do
    {
        cout << "b: ";
        cin >> b;
    } while (b <= a);

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > a && *(ptr + i) < b)
            count++;
    }

    cout << "count: " << count << endl;

    return 0;
}