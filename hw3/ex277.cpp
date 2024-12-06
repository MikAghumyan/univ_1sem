#include <iostream>
using namespace std;

int main(){
	const int n_def = 50;
	int i, n1, n2, s = 0, x[n_def], y[n_def];

	do{
		cout << "n1[2," << n_def << "]: ";
		cin >> n1;
	}while(n1 < 2 || n1 > n_def);

	for(i = 0; i < n1; ++i){
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	do{
		cout << "n2[2," << n_def << "]: ";
		cin >> n2;
	}while(n2 < 2 || n2 > n_def);

	for(i = 0; i < n2; ++i){
		cout << "y[" << i << "]: ";
		cin >> y[i];
	}

	for(i = 0; i < n1; ++i){
		s += (x[i] % 7) ? 0 : x[i];
	}

	for(i = 0; i < n2; ++i){
		s += (y[i] % 7) ? 0 : y[i];
	}

	cout << "S: " << s << endl;

	return(0);
}
