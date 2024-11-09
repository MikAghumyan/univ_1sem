#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double x, s;
	
	cout << "x: "; cin >> x;
	s = log(exp(x) + 1) - pow(pow(x,2) + 4 , (double) 1 / 3 );
	cout << s;
	cout << "\n";
	return 0;
}
