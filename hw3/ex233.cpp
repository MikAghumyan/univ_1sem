#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    int arr[n_def];
    int n, count = 0, a, b;
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

    cout << "a: ";
    cin >> a;
    do
    {
        cout << "b: ";
        cin >> b;
    } while (b <= a);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > a && arr[i] < b)
            count++;
    }

    cout << "count: " << count << endl;

    return 0;
}