#include <iostream>

using namespace std;

class RightAngledTriangle
{
public:
	
	int a, b, c;

	RightAngledTriangle();
	RightAngledTriangle(int a, int b, int c);
	
	int S() { return (a * b) / 2; }
	int ROfCircumscribedCircle() { return c; }


};

class Rectangle : public RightAngledTriangle
{
public:

	Rectangle();
	Rectangle(int a, int b);

	int S() { return a * b; }

};

class Parallelepiped:public RightAngledTriangle
{
public:

	Parallelepiped();
	Parallelepiped(int a, int b, int c);

	int S() { return 2 * c * (a + b); }
	int V() { return a * b * c; }
};

Parallelepiped::Parallelepiped() : RightAngledTriangle()
{
}

Parallelepiped::Parallelepiped(int a1, int b1, int c1) : RightAngledTriangle() 
{
	a = a1;
	b = b1;
	c = c1;
}

Rectangle::Rectangle() : RightAngledTriangle() 
{
	a = 1;
	b = 2;
	c = 0;
}

Rectangle:: Rectangle(int a1, int b1) :RightAngledTriangle()
{
	a = a1;
	b = b1;
} 

RightAngledTriangle::RightAngledTriangle() 
{
	a = 1;
	b = 2;
	c = 3;
}

RightAngledTriangle:: RightAngledTriangle(int a1, int b1, int c1)
{
	 a = a1;
	 b = b1;
	 c = c1;
}


int main()
{
	Rectangle r1;
	
	cout << r1.S() << endl;

    return 0;
}
