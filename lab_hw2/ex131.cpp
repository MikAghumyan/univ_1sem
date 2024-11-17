#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 0, y = 0, s = 0;

	for (unsigned int i = 1; i < 16; i++) {
			x = (i % 2) ? i : pow(i, 3);
			y = (i % 2) ? pow(i, 2) : i;
			s += pow((x - y), 2);
	}
	cout << "S: " << s << endl;

	return (0);
}
