#include <iostream>

int	max(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b > c)
			return (b);
		else
			return (c);
	}
}

int	main(void)
{
	int x, y, z;

	std::cout << "Enter three integers: ";
	std::cin >> x >> y >> z;

	y = max(x, x + 1, x + 1 + y) - max(x, z, y - 1) * 2;

	std::cout << "The result is: " << y << std::endl;

	return (0);
}