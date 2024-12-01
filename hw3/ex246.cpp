#include <iostream>
using namespace std;

int main(void)
{
	const int n_const = 30;
	int x[n_const];
	int n = 0, s = 0, count = 0;

	do {
		cout << "n: "; cin >> n;
	} while (n < 2 || n > n_const);

	for(int i = 0; i < n; ++i){
		cout << "x[" << i << "]:\t";
		cin >> x[i];
	}

	for(int i = 0; i < n; ++i)
	{
		if(x[i] % 2){
			count++;
			s += x[i];
		}
	}

	cout << "S: " << s << "\tCount: " << count << endl;

	return (0);
}
