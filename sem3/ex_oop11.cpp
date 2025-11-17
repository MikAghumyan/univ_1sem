#include <iostream>

using namespace	std;

class C_square
{
	unsigned int a;
	static int total_area;

  public:
	C_square(unsigned int a) : a(a)
	{
		total_area += 4 * a;
	}
	unsigned int get_perimeter()
	{
		return (4 * a);
	}
	static int get_total_area()
	{
		return (total_area);
	}
};

int C_square::total_area = 0;

int	main(void)
{
	unsigned int a1, a2, a3;

	cout << "a1: ";
	cin >> a1;
	cout << "a2: ";
	cin >> a2;
	cout << "a3: ";
	cin >> a3;

	C_square square1(a1);
	C_square square2(a2);
	C_square square3(a3);

	cout << "Perimeter 1: " << square1.get_perimeter() << endl;
	cout << "Perimeter 2: " << square2.get_perimeter() << endl;
	cout << "Perimeter 3: " << square3.get_perimeter() << endl;

	cout << "Total_area: " << C_square::get_total_area() << endl;

	return (0);
}