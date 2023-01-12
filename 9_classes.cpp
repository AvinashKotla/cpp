#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
class classname
{
	access_specifier:
	attribute;

	access_specifier:
	type variablename;
	type variablename;

	function1();
	function2();
}

Classes and structures are syntactically similar
Classes can include functions as well

Access-specifier for a class: public, private and protected
private: members of a class are accessible only from within other members of the same class (or from their "friends")
protected: members are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes
public: members are accessible from anywhere where the object is visible



Without the explicit mention of the access specifier 'public', all attributes are by default private
Every object defined for a particular class has same set of attributes (variables), functions

Classes are used to group all the similar functions together
They are initialize before main()

Functions with same name can be initialized in different classes
The function name greet() can be used in class cls or cls2 or cls3

Objects are used to access the functions from a given class
Hence, object.function() are used to access a given function from a given class in main()
If variables are declared/defined in a class, they can be accessed in main() using object.variable (e.g.: obj.num)
However, it's not a good practice to declare variables in public class (private class is preferred)
Publicly defined functions within a class are used to use the privately defined variables
Method is a function defined in a class

Constructor is a function that is called automatically when you create an object
Constructors doesn't have any return value (not void or int or float etc.)
Constructors have same name as the name of the class they are defined in
Constructors are used to initialize a variable

*/

class cls // The class
{
public:	// Access specifier, tells if cls can be used in main(), outside the class
	void greet()	// function inside the class cls
	{
		cout << "This is printed using class\n";
	}
};


class cls2
{
public: // this part is done to access the privately defined variable name
	void setname(string x)
	{
		name = x;
	}
	string getname()
	{
		return name;
	}
private:
	string name;	// variable declaration inside the class cls2, attribute
};

class cls3
{
public:
	cls3()
	{
		cout << "This is printed automatically because of constructor\n";
	}

};

class cls4
{
public:
	cls4(string z)
	{
		setname(z);
	}
	void setname(string x)
	{
		name = x;
	}
	string getname()
	{
		return name;
	}
private:
	string name;
};

class car
{
public:
	string make; // called attributes or member variables
	string model;
	string colour;
	bool iselectric;
	double cost;

	void speed();
	void brake();
};

class cls5
{
public:
	cls5(int i, int j) // arguments taken by a constructor function
	{
		cout << "Sum of " << i << " and " << j << " is " << i + j << endl;
	}
};



int main()
{
	cls obj;	// declaring an object for the class cls
	obj.greet();

	cls2 obj2;
	obj2.setname("This is printed using private class\n");
	// cout << obj2.name // will give error as name is defined privately
	cout << obj2.getname();

	cls3 obj3; // just mere defining the object calls the constructor, thereby printing the message or executing all statements within the constructor
	cls4 obj4("This string is passed to constructor to setname() to getname() and finally to privately (use \\ to continue on new line)\
		declared name and printed using cout in subsequent lines\n");

	// Here, the string in the obj4() is passed on to the constructor, to setname(), to getname() and finally the privately defined variable name

	cout << obj4.getname();

	cout << "Random number 1: " << rand() << endl; // #include <cstdlib> is required for this random number generator function
	cout << "Random number 2: " << rand() << endl; // 41 is the number is shows the first time
	cout << "Random number 4: " << rand() % 6 << endl; // gives a random number from 0 to 5 (remainder operation is done)
	cout << "Random number 4: " << 1 + (rand() % 6) << endl; // gives RN from 1 to 6 (like roll of a 6-sided dice)

	srand(25); // a RN is seeded, thereby the starting point of the algorithm that generates RN is changed, and hence the first RN is no longer 41
	// If the seed value is same, same subsequent RNs are generated
	cout << "Random number 5: " << rand() << endl;
	cout << "Random number 6: " << rand() << endl;

	srand(time(0)); // #include <ctime> is required for this function
	cout << "Random number 7: " << rand() << endl;
	cout << "Random number 8: " << rand() << endl;

	car car1; // object declaration
	car1.make = "Honda";
	car1.model = "City";
	car1.colour = "cyan";
	car1.iselectric = false;
	car1.cost = 1200000.0;

	car car2 = { "Maruti", "Swift", "blue", false, 350000.0 };
	car cars[] = {
		{"Tesla", "Y", "silver", true, 3000000.0},
		{"Mercedes", "S Class", "Mercury", true, 4500000.0}
	};

	cout << car1.colour << endl; // similar syntax to structures
	cout << "Make \t" << "Model \t" << "Colour \t" << "Iselectric \t" << "Cost \n";

	for (int i = 0; i < 2; i++)
	{
		cout << cars[i].make << "\t";
		cout << cars[i].model << "\t";
		cout << cars[i].colour << "\t";
		cout << cars[i].iselectric << "\t";
		cout << cars[i].cost << endl;
	}

	cls5 obj1(2, 3); // passing arguments to a constuctor function







	return 0;
}














