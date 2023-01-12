#include <iostream>

using namespace std;

// pointers to base class
class polygon
{
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a;
		height = b;
	}
};

class rectangle : public polygon
{
public:
	int area()
	{
		return width * height;
	}
};
class triangle : public polygon
{
public:
	int area()
	{
		return height * width * 0.5;
	}
};

// virtual members
class polygon2 {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}
	virtual int area()
	{
		return 0;
	}
};

class rectangle2 : public polygon2 {
public:
	int area()
	{
		return width * height;
	}
};

class triangle2 : public polygon2 {
public:
	int area()
	{
		return (width * height / 2);
	}
};

// abstract base classes
class polygon3 {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}
	virtual int area(void) = 0;
};

class rectangle3 : public polygon3 {
public:
	int area(void)
	{
		return (width * height);
	}
};

class triangle3 : public polygon3 {
public:
	int area(void)
	{
		return (width * height / 2);
	}
};

// using 'this'

class polygon4 {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a; height = b;
	}
	virtual int area() = 0;
	void printarea2()
	{
		cout << this->area() << '\n';
	}
};

class rectangle4 : public polygon4 {
public:
	int area(void)
	{
		return (width * height);
	}
};

class triangle4 : public polygon4 {
public:
	int area(void)
	{
		return (width * height / 2);
	}
};

// dynamic allocation and polymorphism

class polygon5 {
protected:
	int width, height;
public:
	polygon5(int a, int b) : width(a), height(b) {}
	virtual int area(void) = 0;
	void printarea3()
	{
		cout << this->area() << '\n';
	}
};

class rectangle5 : public polygon5 {
public:
	rectangle5(int a, int b) : polygon5(a, b) {}
	int area()
	{
		return width * height;
	}
};

class triangle5 : public polygon5 {
public:
	triangle5(int a, int b) : polygon5(a, b) {}
	int area()
	{
		return width * height / 2;
	}
};


/*
Pointer to a derived class is type-compatible with a pointer to its base class
Polymorphism is the art of taking advantage of this simple but powerful and versatile feature
Pointers pointing to base classes can inherit only the members of base classes
Pointers pointing to base classes alone cannot inherit the members of derived classes

example:
base class: polygon, derived classes: rectangle, triangle
pointer pointing to base class: ppoly1, ppoly2 can inherit members from polygon (width, height, set_values())
ppoly1, ppoly2 cannot access area()
area() can be accessed by the objects defined under the derived classes and not by the pointers

A virtual member is a member function that can be redefined in a derived class, while preserving its calling properties through references
A class that declares or inherits a virtual function is called a polymorphic class.

Base class: polygon2, derived class: rectangle2, triangle2
Members and functions inherited by polygon2, rectangle2 and triangle2: width, height and set_values(), area()
'virtual' keyword is used for area() in polygon2, allowing area() to be redefined in rectangle2 and triangle2
Had virtual not been used, the area() from polygon2 would have been inherited by rectangle2 and triangle2 and hence would return 0 for all cases

Abstract base classes are used only as base classes and are allowed to have virtual member functions (attributes)
without definition (known as pure virtual functions)
Syntax: replace their definition by =0 (an equal sign and a zero):
Abstract base classes cannot be used to instantiate objects (objects cannot be created under these classes)
Hence, polygon3 poly; is invalid if polygon3 is an abstract base class, however,
	   polygon3 *poly7, *poly8; is valid since pointers can be created under an abstract base class

*/



int main()
{
	triangle tri1;
	rectangle rect1;
	polygon* ppoly1 = &rect1; // pointer declaration under the class polygon, pointing to address of the object rect1
	polygon* ppoly2 = &tri1; // pointer declaration under the class polygon, pointing to address of the object tri1
	ppoly1->set_values(4, 5); // dereferencing the pointer ppoly1
	ppoly2->set_values(4, 5);
	cout << rect1.area() << '\n';
	cout << tri1.area() << '\n';

	rectangle2 rect2;
	triangle2 tri2; //
	polygon2 poly; // object definition under the base class polygon2
	polygon2* ppoly3 = &rect2;
	polygon2* ppoly4 = &tri2;
	polygon2* ppoly5 = &poly;
	ppoly3->set_values(4, 5);
	ppoly4->set_values(4, 5);
	ppoly5->set_values(4, 5);
	cout << ppoly3->area() << '\n';
	cout << ppoly4->area() << '\n';
	cout << ppoly5->area() << '\n';
	
	rectangle3 rect3;
	triangle3 tri3;
	polygon3* ppoly6 = &rect3;
	polygon3* ppoly7 = &tri3;
	ppoly6->set_values(4, 5);
	ppoly7->set_values(4, 5);
	cout << ppoly6->area() << '\n';
	cout << ppoly7->area() << '\n';
	
	rectangle4 rect4;
	triangle4 tri4;
	polygon4* ppoly8 = &rect4;
	polygon4* ppoly9 = &tri4;
	ppoly8->set_values(4, 5);
	ppoly9->set_values(4, 5);
	ppoly8->printarea2();
	ppoly9->printarea2();

	polygon5* ppoly10 = new rectangle5(4, 5);
	polygon5* ppoly11 = new triangle5(4, 5);
	ppoly10->printarea3();
	ppoly11->printarea3();
	delete ppoly10;
	delete ppoly11;


	
	return 0;
}