#include <iostream>
#include <string>
using namespace std;

class rectangle
{
	int width, height;
public:
	rectangle(){}
	rectangle(int x, int y) : width(x), height(y){}
	int area()
	{
		return width * height;
	}
	friend rectangle dup(const rectangle& param); // friend function definition, has access to the private variables width, height
};
rectangle dup(const rectangle& param)
{
	rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}
// new class
class square; // declaring class, this is required since rectangle2 uses square (as a parameter in convert())
class rectangle2
{
	int width, height;
public: 
	int area()
	{
		return width * height;
	}
	void convert(square a);
};

class square
{
	friend class rectangle2; // this declares rectangle2 as a friend of square (not vice versa) and hence has access to all variables and functions (private and public alike) of rectangle2
private:	// square is not friend of rectangle and has no access to member variables and functions of rectangle2
	int side; //
public:
	square (int a) : side(a) {}
};

void rectangle2::convert(square a) // convert is defined in rectangle2, accessed by class square as they are friends
{
	width = a.side;
	height = a.side;
}

// inheritance
class polygon // base class
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

class drectangle : public polygon // derived class from the base polygon
{
public:
	int area()
	{
		return width * height;
	}
};
class dtriangle : public polygon // derived class from the base polygon
{
public:
	int area()
	{
		return 0.5 * width * height;
	}
};

// mother-daughter

class mother
{
public:
	mother()
	{
		cout << "Mother class: no parameter\n";
	}
	mother(int num)
	{
		cout << "Mother class: int parameter\n";
	}
};
class daughter : public mother
{
public:
	daughter(int a) // since it is specified, daughter's constructor is called
	{
		cout << "Daughter class: int parameter\n";
	}
};
class son :public mother
{
public:
	son(int a) : mother(a) // here it is specified that mother's constructor has to be called
	{
		cout << "Son class: int parameter\n";
	}
};

// multiple inheritances

class polygon2 {
protected:
	int width, height;
public:
	polygon2(int a, int b) : width(a), height(b) {}
};

class output {
public:
	static void print(int i);
};

void output::print(int i) {
	cout << i << '\n';
}

class drectangle2 : public polygon2, public output {
public:
	drectangle2(int a, int b) : polygon2(a, b) {}
	int area()
	{
		return width * height;
	}
};

class dtriangle2 : public polygon2, public output {
public:
	dtriangle2(int a, int b) : polygon2(a, b) {}
	int area()
	{
		return width * height / 2;
	}
};


/*
Friends are functions or classes declared with keyword 'friends'
A non-member function can access the private and protected members of a class if they are declared using keyword 'friend' of that class
In rectangle2 and sqaure classes example:
	the class rectangle2 is a friend of class square but the class square is not a friend of rectangle2. Hence,
	rectangle2 has access to square's functions and other members, square has no access to rectangle2's members
Friend of a friend is not a friend, i.e., friendship is not transitive, unless explicitly specified
*/

/*
New classes (derived class) can be created from the existing (base class)
Derived classes inherit all the members and functions of the base class and new members can be added to them
Inheritance between two classes is declared in derived class
Syntax: derivedclassname : public baseclassname
{
	body;
}
Example: Creating new derived classes drectangle and dtriangle from the base class polygon
	the members inherited from the base class polygon by the derived classes drectangle and dtriangle are width, height, set_values()
	since height and width are protected (not private) members, they can be accessed by the derived classes drectangle and dtriangle
polygon::width;			 has protected access
drectangle::width        has protected access
polygon::set_values()	 has public access
drectangle::set_values() has public access
*/	

/*
the access specifier can be private or protected also
The protected members of a class can be accessed by the derived classes
The derived classes cannot access the private members 
				Access				public	protected	private
	1.	members of the same class	yes		yes			yes
	2.	members of derived class	yes		yes			no
	3.	not members					yes		no			no

A publicly derived class inherits access to every member from base class except:
	its constructors and its destructor
	its assignment operator members (operator=)
	its friends
	its private members

Constructor inheritance from base classes to derived classes
Daughter (int a)          // nothing specified: call default constructor
Son (int a) : Mother (a)  // constructor specified: call this specific constructor
*/

/*
A class can inherit from more than one base classes
Syntax: class derivedclassname: accessspecifier baseclassname, accessspecifier baseclassname;
e.g.: class drectangle2: public polygon2, public output;
	  class dtriangle2: public polygon2, public output;
*/

int main()
{
	rectangle obj1;
	rectangle obj2(3, 4);
	obj1 = dup(obj2);
	cout << obj2.area() << endl;
	
	rectangle2 rect;
	square sqr(4);
	rect.convert(sqr);
	cout << rect.area();
	
	drectangle dr1;
	dtriangle dtri1;
	dr1.set_values(10, 3);
	dtri1.set_values(24, 12);
	cout << "\nArea of rectangle is " << dr1.area() << endl;
	cout << "Area of triangle is " << dtri1.area() << endl;

	daughter d1 (10);
	son s1 (20);

	drectangle2 drect2(10, 20);
	dtriangle2 dtri2(20, 10);
	drect2.print(drect2.area());
	dtri2.print(dtri2.area());





	return 0;
}