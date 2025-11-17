#include <iostream>

using namespace	std;

class C_xyz
{
  private:
	int x, y, z;
	static int total_sum;

  public:
	C_xyz(int x, int y, int z);
	int get_multiply();
	static int get_total_sum()
	{
		return (total_sum);
	}
};

int C_xyz::total_sum = 0;

C_xyz::C_xyz(int x, int y, int z) : x(x), y(y), z(z)
{
	total_sum += x + y + z;
}

int C_xyz::get_multiply()
{
	return (x * y * z);
}

int	main(void)
{
	int x, y, z;

	cout << "Enter x, y, z for xyz1: ";
	cin >> x >> y >> z;
	C_xyz xyz1(x, y, z);
	cout << "Multiplied: " << xyz1.get_multiply() << endl;
	cout << "Enter x, y, z for xyz2: ";
	cin >> x >> y >> z;
	C_xyz xyz2(x, y, z);
	cout << "Multiplied: " << xyz2.get_multiply() << endl;
	cout << "Enter x, y, z for xyz3: ";
	cin >> x >> y >> z;
	C_xyz xyz3(x, y, z);
	cout << "Multiplied: " << xyz3.get_multiply() << endl;
	cout << "Total sum: " << C_xyz::get_total_sum() << endl;
	return (0);
}