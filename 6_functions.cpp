#include <iostream>
#include <fstream>
#include <string>
#define PI 3.14159
using namespace std;

/*
int add(int n1, int n2)
{
	return (n1+n2);
}
*/

/* check the function and the corresponding call once
void add2()
{
	int n1, n2;
	cout << "Enter two numbers\n";
	cin >> n1 >> n2;
	cout << "Sum of " << n1 << " and " << n2 << " is " << (n1 + n2) << endl;
}
*/

/*
void dupbyval(int a, int b, int c)
{
	a += a;
	b += b;
	c += c;
}

void dupbyref(int& a, int& b, int& c)
{
	a += a;
	b += b;
	c += c;
}
*/

/*
float divi(int a, int b=2)
{
	return (a / b);
}
*/

/*
// int fun(int a, int b); is an example of function declaration. The body of the function can be defined later on (semi-colon is required)
// int fun(int, float); is another way to declare a function, where the argument names need not be specified

void odd (int x); // function declaration
void even (int x);
*/

/*
int fact(int n)
{
	if (n > 0)
		return (n * fact(n - 1));
	else
		return 1;
}
*/


int main()
{
	/*
	type name (par1, par2)
	{
	statements;
	statements;
	}
	Each parameter par1 is followed by its datatype
	The function should return some value
	main() is first executed when a program is executed
	All the functions should be defined or declared before the function call is made in main() body
	The datatype of arguments passed from function call should match with that of arguments in function body
	
	If the function doesn't take any input arguments and doesn't return any value, the datatype to be used during
	function definition is 'void'
	If the main() implicitly or explicitly returns 0 => program was successful
	If it shows EXIT_SUCCESS => the program is successful. This value is defined in the header <cstdlib>
	If it shows EXIT_FAILURE => the program failed. This value is defined in header <cstdlib>
	Values of variables which are sent to the function during call do not change if they are modified inside the function body.
	Only a copy of variables is sent, not the values themselves
	The function definition: dup (int& a, int&b) instead of dup(int a, int b) allows to modify the values of
	the original variables passed during function call (refer dup() function)
	Using &, followed by the datatype causes the variables themselves to be passed, not just their copies
	These variables are called references, any change in the local function affects the original variabless
	s1+s2 concatenates the two strings s1 and s2
	Using & is crucial when passing large data as arguments for function (refer concat() function)
	Without using &, the arguments are copied into the new variables a, b and then operation is performed, causing huge data to be copied and time spent
	Using & passes the variables themselves, and hence no extra memory is required
	However, using & can modify the variables. This is prevented by defining them as constants
	concat(const string& s1, const string& s2) passes the variables themselves, but forbids any changes within the function body
	Two arguments can be passed to function requiring three values, provided that the third value is defined in function definition
	The value in function definiton is overridden by the value passed on during function call
	The function can be declared before it is defined (refer to odd(), even())
	
	



	*/




	/*
	int a, b;
	cout << "Enter any two numbers \n";
	cin >> a >> b;
	// int sum = add(a, b);
	int sum = add(a, b);
	cout << "The sum is " << sum << endl;
	*/

	/*
	string reply;
	cout << "Do you want to add nnumbers?\n";
	cin >> reply;
	if (reply == "Yes")
		add2;
	else
		cout << "Choose the operation\n";
	*/

	/*
	int x = 10, y = 20, z = 30;
	dupbyval(x,y,z);
	cout << "When passed by value, x is " << x << ", y is " << y << ", z is " << z << endl;
	dupbyref(x, y, z);
	cout << "When passed by reference, x is " << x << ", y is " << y << ", z is " << z << endl;
	*/

	/* 
	// Varibles (with pre-initialized values) can be passed as arguments during a function call
	cout << divi(10) << endl;
	cout << divi(10, 5) << endl;
	*/
	
	/*
	int x;
	do
	{
		cout << "Enter a number \n";
		cin >> x;
		odd(x);
	} while (x != 0);

	return 0;
}

	void odd (int x)
	{
		if ((x % 2) != 0)
			cout << x << " is odd" << endl;
		else even(x);
	}
	void even (int x)
	{
		if ((x % 2) == 0)
			cout << x << " is even\n";
		else odd(x);
	}
	*/

	/*
	int n;
	cout << "Enter a number\n";
	cin >> n;
	cout << "Factorial of " << n << " is " << fact(n);
	*/
	
	
	
	
	
	
	
	
	return 0;
}