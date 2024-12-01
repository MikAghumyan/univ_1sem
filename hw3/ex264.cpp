#include <iostream>
using namespace std;

int main(void)
{
	const int n_def = 30;
	int arr[n_def];
	int max, min, n;

	do{
		cout << "n[2,30]: "; cin >> n;
	} while(n < 2 || n > 30);

	for(int i = 0; i < n; ++i){
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}

	min = arr[0]; max = arr[0];

	for(int i = 1; i < n; ++i){
		if (arr[i] < min) min = arr[i];
		else if (arr[i] > max) max = arr[i];
	}	

	cout << "max*min: " << (max * min) << endl;

	return (0);
}
