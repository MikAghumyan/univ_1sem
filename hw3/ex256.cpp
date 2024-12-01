#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int n_def = 50;
    int arr[n_def];
    int n, s = 0, count = 0;
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

    for (int i = 0; i < n; i += 2)
    {
        if (sqrt(arr[i]) == (int)(sqrt(arr[i])))
        {
            s += arr[i];
            count++;
        }
    }

    cout << "Avarage: " << (s / count) << endl;
}