#include <cmath>
#include <iostream>

using namespace	std;

class Quadric
{
  private:
	float a, b, c;

	float getDes()
	{
		return (b * b - 4 * a * c);
	}

  public:
	Quadric(float _a, float _b, float _c)
	{
		a = _a;
		b = _b;
		c = _c;
	}
	void printQuadric()
	{
		cout << a << "x^2 + " << b << "x + " << c << endl;
	}
	void printAtX(int x)
	{
		int result = a * pow(x, 2) + b * x + c;
		cout << "f(" << x << ") = " << result << endl;
	}
	void printValues()
	{
		float des = getDes();
		if (des < 0)
			cout << "No values\n";
		else if (des == 0)
			cout << "x = " << -b / (2 * a) << endl;
		else
			cout << "x1 = " << (-b + sqrt(des)) / (2 * a) << "\nx2 = " << (-b
				- sqrt(des)) / (2 * a) << endl;
	}
};

int	main(void)
{
	float a, b, c, x;
	cout << "a:";
	cin >> a;
	cout << "b:";
	cin >> b;
	cout << "c:";
	cin >> c;
	Quadric quad1(a, b, c);
	quad1.printQuadric();
	cout << "x: ";
	cin >> x;
	quad1.printAtX(x);
	quad1.printValues();
	return (0);
}