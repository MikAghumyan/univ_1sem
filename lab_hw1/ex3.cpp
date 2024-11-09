#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z, s;
    const double PI = 3.14159265358979323846;

    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    z = pow(sin(x*x+y), 2);
    s = sin(PI/12 + x)*cos((y+7)/(PI + pow(z, 2)) ) + exp(z + 4);
    cout << s << endl;
    return 0;
}