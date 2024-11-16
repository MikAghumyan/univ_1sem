#include <iostream>
using namespace std;

int main ()
{
	double x = -3.8;
	double y = 0;

	while (x <= 5.4) {
		y = 2 * (x + 4);
		cout << "x: " << x << "\ty: " << y << endl;
		x += 0.3;
	}
	return 0;
}
