#include <iostream>
using namespace std;

int main(void)
{
	const int n_def = 30;
	int arr[n_def], *ptr;
	int max, n;

	do{
		cout << "n[2,30]: "; cin >> n;
	} while(n < 2 || n > 30);

	ptr = arr;
	for(int i = 0; i < n; ++i){
		cout << "arr[" << i << "]: ";
		cin >> *(ptr + i);
	}

	max = *ptr;
	for(int i = 1; i < n; ++i){
		max = (*(ptr + i) > max) ? *(ptr + i) : max;
	}

	cout << "max: " << max << endl;

	return (0);
}
