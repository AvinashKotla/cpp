#include <iostream>

using namespace std;

/*
special members functions are the functions that implicitly defined as the members (attributes) of a class
1. Default constructor: C::C();
2. Destructor	      : C::~C();
3. Copy constructor   : C::C(const	C&);
4. Copy assignment	  : C& operator = (constC&);
5. Move constructor   : C::C(&&);
6. Move assignment	  : C&operator = (C&&)

1. Default constructor is called when an class object is declared but not initialized with any arguments (here, cls1 to cls3)
   It has same name as the class. Syntax: classname objectname;
2. Destructor do the cleanup of any dynamic memory allocated by the classes they are associated with
   It takes no argument and returns nothing (not even void) and has same name as the class
3. Copy constructor is a constructor whose first parameter is of type reference to the class itself (possibly const qualified)
   Syntax: class::class (const class&);

MyClass foo; // classname objectname;
MyClass bar (foo);       // object initialization: copy constructor called
MyClass baz = foo;       // object initialization: copy constructor called
foo = bar;               // object already initialized: copy assignment called


*/

class cls1
{
public:
	int total;
	void fun(int num) // here no constructor is defined
	{
		total += num;
	}
};

class cls2
{
public:
	int total;
	//cls2(int num) : total(num) {} // the constructor explicitly defined takes in an argument from class object, hence default constructor cannot be used
	cls2(int num) // above code can also be used to define a constructor
	{
		total = num;
		cout << "This is not a default constructor\n";
	}
	void accrue(int x)
	{
		total += x;
		cout << "This is not part of a default constructor\n";
	}
};

class cls3
{
public:
	int val;
	cls3()
	{
		cout << "this is part of default constructor, without input arguments from object declaration\n";
	}
	cls3(int num) : val(num) 
	{
		cout << "this is part of normal constructor, with input arguments from object declaration\n";
	}
};

/* revisit destructor
class cls4
{
	string* ptr;
public:
	cls4() : ptr(new string) {}
	cls4(const string& str) : ptr(new string(str)) {}
	cls4() // it's now a destructor
	{
		delete ptr;
	}
	const string& content() const
	{
		return *ptr;
	}
};
*/


int main()
{
	cls1 obj1; // is valid, cannot pass any argument and hence is a default constructor
	// cls2 obj1; is invalid; the constructor explicitly defined takes in an argument from class object, hence default constructor cannot be used
	cls2 obj2(2);
	cls3 obj3;
	cls3 obj4(100);
	
	cls4 obj5;
	cls4 obj6("hello");
	
	







	
	return 0;
}