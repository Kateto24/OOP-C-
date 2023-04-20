#include <iostream>

using namespace std;

class Circle
{
public:
	int radius, coordinatesOfCenter;

	Circle(int radius, int coordinatesOfCenter);

	int S() { return 3.14 * radius * radius; }
	int C() { return 3.14 * 2 * radius; }

};

Circle::Circle(int r, int c)
{
	radius = r;
	coordinatesOfCenter = c;
}



int main()
{
	Circle circle1(5, 2);

	cout << "The radius of the circle is: " << circle1.radius << endl;
	cout << "The coordinates of the centre of circle is: " << circle1.coordinatesOfCenter << endl;
	cout << "The S of the circle is: " << circle1.S() << endl;
	cout << "The C of the circle is: " << circle1.C() << endl;

    return 0;
}

