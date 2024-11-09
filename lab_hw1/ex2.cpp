#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z, s;

    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    z = pow(x+4/pow(y*y + 4, 3), (double)1/5);
    s = sin(pow(x+z, 2)) + 3*z + y/pow(x, 2);
    cout << s << endl;
    return 0;
}