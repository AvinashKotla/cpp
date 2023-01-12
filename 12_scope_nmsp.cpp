#include <iostream>
#include <string>
using namespace std;

/*
// Two functions are overloaded if they have same names
// The return type and the arguments may have different data types and accordingly the right function is identified during function call
int addition(int a, int b)
{
	return (a + b);
}

double addition(double a, double b)
{
	return(a + b);
}
*/

/*
template <class X>
X sum(X a, X b)
{
	X result;
	result = a + b;
	return result;
}
*/

namespace namespace1
{
	int pi = 3;
	string function()
	{
		cout << "From within namespace 1: Two times pi is " << 2 * pi << endl;
		return("Byenamespace1!");
	}
}
namespace namespace2
{
	double pi = 3.1415;
	string function()
	{
		cout << "From within namespace 2: Two times pi is " << 2 * pi << endl;
		return("Byenamespace2!");
	}
}

namespace namespace3
{
	int a = 5, b = 10;
}
namespace namespace4
{
	double a = 5.5555, b = 10.10101;
}




int main()
{

/*
	int a = 100, b = 200;
	double c = 3.14, d = 1.693;
	cout << "Using the overloaded functions 'addition': \n";
	cout << "Result with integer type arguments: " << a << " + " << b << " = " << addition(a, b) << endl;
	cout << "Result with double type arguments: " << c << " + " << d << " = " << addition(c, d) << endl;
	*/


	/*
	int p = 10, q = 20, r;
	double x = 1.5, y = 3.5, z;
	r = sum<int>(p, q);
	z = sum<double>(x, y);

	cout << "Result with integer inputs: " << p << " + " << q << " = " << r << endl;
	cout << "Result with double inputs: " << x << " + " << y << " = " << z << endl;
	z = sum<int>(x, y);
	cout << "Result with double inputs but passing them as int: " << x << " + " << y << " = " << z << endl;
	*/




	/*
	Scope of a variable is limited to the function it is defined (declared) in
	When a function (smaller (or inner)) is enclosed within a larger block, the value of a given variable defined in the outer block
	exists for the entire block. Value of any variable defined in the inner block exists only in the inner block.
	*/
	/*
	int a = 10, b = 20;
	cout << "In outer block: a = " << a << ", b = " << b << endl;
	{
		int a = 100;
		b = 200;
		cout << "In inner block: a = " << a << ", b = " << b << endl;
	}
	cout << "Again in outer block: a = " << a << ", b = " << b << endl;
	*/

	/*
	Using namespaces enables to narrow the scope of the variables having a wide scope
	Scope operator (::) is used to access the variables and functions defined in a namespace with a valid identifier
	Different functions and variables defined using different namespaces can have same names (identifier name)
	Using the scope operator, they can be accessed without any conflict
	*/

	/*
	cout << namespace1::function() << endl;
	cout << "value of pi from namespace1 is " << namespace1::pi << endl;
	cout << namespace2::function() << endl;
	cout << "value of pi from namespace2 is " << namespace2::pi << endl;
	*/

	/*
	using namespace namespace3; 
	// since namespace3 is accessed by 'using', scope operator (::) is not required the variables defined under the namespace3
	cout << "Using the keyword 'using': \n Value of a: " << a << ", b: " << b << endl;
	cout << "Without using the keyword 'using', i.e., by namespace4::a and namespace4::b: \n Value of a: " << namespace4::a << ", b: " << namespace4::b << endl;
	*/

	// individual variables can also be accessed using (::)
	
	/*
	using namespace namespace3;
	using namespace4::a;
	cout << "a = " << a << "\t" << "b = " << b << endl; // gives a = 5.5555		b = 10
	*/
	/*
	using namespace namespace3;
	using namespace4::b;
	cout << "a = " << a << "\t" << "b = " << b << endl; // gives a = 5		b = 10.01
	*/
	/*
	using namespace3::a;
	using namespace namespace4;
	cout << "a = " << a << "\t" << "b = " << b << endl; // gives a = 5		b = 10.01
	*/
	/*
	using namespace3::b;
	using namespace namespace4;
	cout << "a = " << a << "\t" << "b = " << b << endl; // gives a = 5.5555		b = 10
	*/

	// namespace new_name = current_name; // this is used to rename a namespace
	// Global variables have static storage, local variables have automatic storage
	// global uninitialized variables, when printed give 0 as output
	// local uninitialized variables, when printed give garbage values as output








	return 0;
}