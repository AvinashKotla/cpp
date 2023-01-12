#include <iostream>
#include <string>
using namespace std;

class rectangle
{
	int width, height; // without explicit mention, private access specifier is assigned (unlinke structures where default is public)
public:
	void values(int, int); // function declaration, and hence scope operator (::) has to be used to access (or define it)
	int area()
	{
		return width * height;
	}
};

void rectangle::values(int x, int y) // scope operator (::) is used to link the function values() to the class rectangle
{
	width = x;
	height = y;
}
// since width and height are privately defined attributes, they cannot be accessed by objects outside the class
// their scope is limited to the class only

class rectangle2
{
	int width, height; // without explicit mention, private access specifier is assigned
public:
	rectangle2(int, int); // constructor function declaration, and hence scope operator (::) has to be used to access (or define it)
	int area()
	{
		return width * height;
	}
};

rectangle2::rectangle2(int x, int y) // scope operator (::) is used to link the function rectangle2() to the class rectangle2
{									// constructors are not allowed a return type (void, int etc. should not be used)
	width = x;						// constructor should have same name as the class they are defined in
	height = y;
}


class circle
{
	double rad;
public:
	circle(double r) // constructor function
	{
		rad = r;
	}
	double circumf() // function inside a class
	{
		return 2 * 3.1415 * rad;
	}
};


class rectangle3
{
	int width, height;
public:
	rectangle3(int, int); // constructor
	int area()
	{
		return width * height;
	}
};
/* constructor definition used to initialize class members (attributes)
rectangle3::rectangle3(int x, int y){width = x;	height = y;}
rectangle3::rectangle3(int x, int y) : width(x) { height = y; } // by using member initialization 
rectangle3::rectangle3(int x, int y) : width(x), height(y) {} // by using {}
*/

class rectangle4
{
	int width, height;
public:
	rectangle4(int x, int y) : width(x), height(y) {}
	int area(void)
	{
		return width * height;
	}
};





int main()
{
	
	rectangle rect1;
	rect1.values(3, 4);
	cout << "Area: " << rect1.area() << "units\n";
	
	rectangle2 rect2(5,5); // passing arguments using constructor
	cout << "Area: " << rect2.area() << "units\n";
	// check overloading constructor, and default constructor once

	rectangle2 r1(2, 3);
	//rectangle2 r3; // here no arguments are passed by the object, the constructor called due to this object definition is default constructor



	
	// four ways to construct objects of a class whose constructor takes a single parameter
	circle obj1(10.0); // functional form
	circle obj2 = (2.5); // assignment initialization
	circle obj3{ 5.0 }; // uniform initialization, preferred
	circle obj4 = { 7.5 }; // POD-like
	cout << "Circumference is " << obj1.circumf() << endl; // and similarly for other ways
	
	/*
	rectangle rectb;   // default constructor called
	rectangle rectc(); // function declaration (default constructor NOT called)
	rectangle rectd{}; // default constructor called 
	*/
	

	rectangle4 obj(3, 4);
	rectangle4* p1, * p2, * p3;
	p1 = &obj;
	p2 = new rectangle4(5, 6);
	p3 = new rectangle4[2]{ {2,4}, {3,6} };
	cout << "obj area = " << obj.area() << endl;
	cout << "*p1's area = " << p1->area() << endl;
	cout << "*p2's area = " << p2->area() << endl;
	cout << "p3[0]'s area = " << p3[0].area() << endl;
	cout << "p3[1]'s area = " << p3[1].area() << endl;
	
	/*
	*x		: pointed to by x
	&x		: address of x
	x.y		: member y of object x
	x->y	: member y of object pointed to by x
	(*x).y	: member y of object pointed to by x (equivalent to the previous one)
	x[0]	: first object pointed to by x
	x[1]	: second object pointed to by x
	x[n]	: (n+1)th object pointed to by x
	*/
	
	
	
	return 0;
}