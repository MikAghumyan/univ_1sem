#include <iostream>
using namespace std;

int main ()
{
	int x = -5, y = 0;

	while(x <= 5)
	{
		y = 7 - x;
		cout << "x: " << x << "\ty: " << y << endl;
		x += 2;
	}

	return (0);
}
