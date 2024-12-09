#include <iostream>
using namespace std;

int main(){
    const int n_def = 50;
    int arr[n_def], n, y[n_def], max=0, min=0;
    do{
        cout << "n: "; cin >> n;
    }while(n < 2 || n > n_def);

    for(int i = 0; i < n; i++)
    {
        cout << "num" << i << ": ";
        cin >> arr[i];
    }
    int s = 0;
    for(int i = 0; i < n; ++i){
        s += arr[i];
        y[i] = s;
        cout << s << ", ";
    }

    cout << "\n";

    return (0);
}