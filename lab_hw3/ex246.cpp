#include <iostream>
using namespace std;

int main(void)
{
	const int n_const = 30;
	int x[n_const], *ptr, n = 0, s = 0, count = 0;

	do {
		cout << "n: "; cin >> n;
	} while (n < 2 || n > n_const);

	ptr = x;
	for(int i = 0; i < n; ++i){
		cout << "x[" << i << "]:\t";
		cin >> *(ptr + i);
	}

	for(int i = 0; i < n; ++i)
	{
		if(*(ptr + i) % 2){
			count++;
			s += *(ptr + i);
		}
	}

	cout << "S: " << s << "\tCount: " << count << endl;

	return (0);
}
