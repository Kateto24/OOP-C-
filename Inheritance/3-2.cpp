#include <iostream>
#include <cmath>

using namespace std;

class Rectangle 
{
public:

	int a, b;

	Rectangle();
	Rectangle(int a, int b);

	int P() { return 2 * a + 2 * b; }
	int S() { return a * b; }

};

Rectangle::Rectangle()
{
	a = 5;
	b = 6;
}

Rectangle::Rectangle(int a1, int b1) 
{
	a = a1;
	b = b1;
}

class Triangle : public Rectangle
{
public:

	int c;

	Triangle();
	Triangle(int a1, int b1, int c1);

	int p = (a + b + c) / 2;

	int P() { return a + b + c; }
	double S() { return sqrt(p * (p - a) * (p - b) * (p - c)); }

};

Triangle::Triangle() : Rectangle()
{
	c = 4;
}

Triangle::Triangle(int a1, int b1, int c1) : Rectangle()
{
	a = a1;
	b = b1;
	c = c1;
}

int main()
{
	Rectangle r1;
	cout << r1.a << endl;
	cout << r1.b << endl;
	cout << r1.P() << endl;
	cout << r1.S() << endl;

	Triangle t1(5, 8, 9);
	cout << t1.a << endl;
	cout << t1.b << endl;
	cout << t1.c << endl;
	cout << t1.P() << endl;
	cout << t1.S() << endl;

    return 0;
}
