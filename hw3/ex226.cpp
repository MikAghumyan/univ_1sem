#include <iostream>
using namespace std;

int main()
{
    const int n_def = 50;
    double arr[n_def];
    int n;
    double p = 1;
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
        p *= arr[i];
    }

    cout << "p: " << p << endl;
    return 0;
}