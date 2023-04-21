#include <iostream>

using namespace std;

class Triangle
{
public:
	int a, b, c;

	Triangle(int a1, int b1, int c1);

	int P();
	int DoublingTheSides();


};

Triangle::Triangle(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
}

int Triangle::P() {

	int p;
	p = a + b + c;

	return p;
}

int Triangle::DoublingTheSides() {
	a *= 2;
	b *= 2;
	c *= 2;
	return a, b, c;
}

int main()
{
	Triangle triangle1(5, 5, 4);

	cout << "Sides before doubling " << endl;
	cout << "Side a is: " << triangle1.a << endl;
	cout << "Side b is: " << triangle1.b << endl;
	cout << "Side c is: " << triangle1.c << endl;
	cout << "The perimeter is: " << triangle1.P() << endl;

	triangle1.DoublingTheSides();
	cout << endl;
	cout << "Sides after doubling " << endl;
	cout << "Side a is: " << triangle1.a << endl;
	cout << "Side b is: " << triangle1.b << endl;
	cout << "Side c is: " << triangle1.c << endl;
	cout << "The perimeter of doubling sides: " << triangle1.P() << endl;

	return 0;
}
