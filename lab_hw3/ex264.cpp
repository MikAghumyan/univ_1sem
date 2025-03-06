#include <iostream>
using namespace std;

int main(void)
{
	const int n_def = 30;
	int arr[n_def], *ptr;
	int max, min, n;

	do{
		cout << "n[2,30]: "; cin >> n;
	} while(n < 2 || n > 30);

	ptr = arr;
	for(int i = 0; i < n; ++i){
		cout << "arr[" << i << "]: ";
		cin >> *(ptr + i);
	}

	min = *ptr; max = *ptr;

	for(int i = 1; i < n; ++i){
		if (*(ptr + i) < min) min = *(ptr + i);
		else if (*(ptr + i) > max) max = *(ptr + i);
	}	

	cout << "max*min: " << (max * min) << endl;

	return (0);
}
