#include <iostream>
#include <string>
using namespace std;

/* the structure (or class for that matter) defintion below would give error, since + operation among objects is not defined properly
struct sname
{
	string str;
	int a,b;
}obj1, obj2, obj3; // object definition for the structure sname

obj3 = obj1 + obj2;

	other than addition, several operations can be overloaded:
	+    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
	<<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
	~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new
	delete    new[]     delete[]

	defining a new operation, say vector addition (in 2D cartesian system) involves x.x + y.y and taking square root of the answer

	creating a new operation by using an existing fundamental operation:
	syntax: type operator sign (parameters) { body }
	
	a static data member of a class, also called class variable, has same value for all the objects of the class
	a static variable has to be coupled with class using scope operator (::) outside the class body
	e.g.: int cls::i; string cls::str; and so on. Syntax: datatype classname::staticvariablename
	default values of a static variable when a new object is created:
		static int is 0 (not some garbage value)
		static string is an empty string
		static character is empty character
		static double is 0 (not some garbage value)
	every time a new object is created, the contents of constructor function are executed
	if two objects are defined, then the statements within constructor function are executed twice
	static variables can be scoped by the object name or by the class name also (using classname is permitted only for static variables)
	static variables have to be initialized outside the class or in constructor body and never during their declaration
*/

class vect
{
public:
	int x, y;
	vect() {};
	vect(int a, int b): x(a), y(b) {} // function name CVector (constructor)
	vect operator + (const vect&); 
};  

vect vect::operator+ (const vect& param) // function that returns a CVector
{ // here operator + overloads the traditional + operator 
	vect temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
} // read more about this

class cls1
{
public:
	static int i; // initializing a static variable during declaration is invalid
	static string str;
	static char c;
	static double db;
	// initializing a static variable in class body (among attributes or members) is invalid
	cls1()
	{
		i = 100; // initializing a static variable in constructor body is valid
		cout << "Default values of datatypes when a constructor is called by object definiton:\n";
		cout << "Static int i has      " << i << endl;
		cout << "Static string str has " << str << endl;
		cout << "Static char c has	   " << c << endl;
		cout << "Static double db has  " << db << endl;
	}
};
string cls1::str; // scoping the static variable is compulsory
int cls1::i;
char cls1::c;
double cls1::db;

class cls2
{
public:
	int x;
	cls2() {}
	cls2(int value) : x(value) {}
	void get() const
	{
		cout << "this is defined as constant function and hence can be accessed by a constant object" << endl;
	}
};

class cls3
{
	int x;
public:
	cls3(int val) : x(val) {}
	const int& get() const // a constant function returning a constant value
	{
		cout << "this is a a constant function returning a constant value" << endl;
		return x;
	}
	int& get() // a function returning an int value
	{
		cout << "this is a plain function returning an integer value" << endl;
		return x;
	}
};

int main()
{
	/*
	vect v1(3, 4);
	vect v2(8, 6);
	vect result;
	result = v1 + v2;
	cout << result.x << ',' << result.y << endl;
	*/
	// read more about this
	
	/*
	int val;
	cls1 c1, c2;
	cout << "Answer is 0, in other words cls::db or c1.db " << ", i.e., " << cls1::db << " or " << c1.db << endl;
	*/

	/*
	const cls2 obj1;
	// obj1.x = 100; is invalid, since the object obj1 is a constant
	cout << obj1.x << endl; // is valid and will return a garbage value if it is not initialized or assigned any value
	obj1.get(); // calls the constant function because the object obj1 is of const type
	*/

	/*
	int get() const {return x;}        // const member function
	const int& get() {return x;}       // member function returning a const&
	const int& get() const {return x;} // const member function returning a const&
	class member functions can be overloaded (one name, more than one variable or functions) in terms of their constness
	*/
	
	cls3 obj1 = 10;
	const cls3 obj2(20); // the keyword 'const' should be followed by classname and objectname
	obj1.get(); // plain obj with plain function
	obj2.get(); // constant obj with constant function
	
	// obj1 = 10; is invalid; value to a constructor function has to be sent at object definition, and not at some point after object definition
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}