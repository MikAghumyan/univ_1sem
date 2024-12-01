#include <iostream> 
using namespace std;

int main(void)
{
	const int n_def = 30;
	int arr[n_def];
	int min_i = 0, n;

	do {
		cout << "n[2,30]: "; cin >> n;
	} while (n < 2 || n > 30);

	for (int i = 0; i < n; ++i){
		cout << "arr[" << i << "]: ";
		cin >> arr[i];
	}

	for (int i = 1; i < n; ++i){
		if (arr[i] < arr[min_i]) min_i = i;
	}

	cout << "min: " << min_i << " : " << arr[min_i] << endl;

	return (0);
}
