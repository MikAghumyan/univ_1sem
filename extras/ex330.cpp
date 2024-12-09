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
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[max]) max=i;
        if(arr[i] <= arr[min]) min=i;
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(!( max == i || min == i))
        {
            y[j++] = arr[i];
            cout << arr[i] << "\t" << i << endl;
        }
    }


    return (0);
}