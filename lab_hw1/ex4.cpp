#include <iostream>
using namespace std;

int main(void)
{
	int a,b,c,d,s;

	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	cout << "d: "; cin >> d;
	s = a + b + c + d;

	if(a == s - a || b == s - b || c == s - c || d == s - d)
		cout << "true";
	else
		cout << "false";

	return (0);
}
