#include <iostream>

using namespace	std;

class Rectangle
{
  private:
	float width = 0;

	void printHorizontal(char c)
	{
		for (int i = 0; i < width; i++)
			cout << c;
		cout << endl;
	}

	void printVertical(char c)
	{
		cout << c;
		for (int j = 0; j < width - 2; j++)
			cout << ' ';
		if (width > 1)
			cout << c;
		cout << endl;
	}

  public:
	Rectangle(float w) : width(w)
	{
	}

	float area() const
	{
		return (width * width);
	}

	float perimeter() const
	{
		return (4 * (width));
	}

	void print(char c)
	{
		int i, j;
		if (width >= 1)
			printHorizontal(c);
		for (i = 0; i < width - 2; i++)
			printVertical(c);
		if (width > 1)
			printHorizontal(c);
	}
};

int	main(void)
{
	float width;
	char c;

	cout << "Width: ";
	cin >> width;
	cout << "Character: ";
	cin >> c;
	Rectangle rect(width);
	cout << "Area: " << rect.area() << endl;
	cout << "Perimeter: " << rect.perimeter() << endl;
	rect.print(c);
	return (0);
}