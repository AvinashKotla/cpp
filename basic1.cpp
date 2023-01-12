#include <iostream>
#include <string>
#include <fstream>

using namespace std;
#define pi 3.14159
#define newline '\n'



int main()
{
	int a = 10;
	auto c = a; // auto ensures that the datatype of c is same as that of the value it is assigned
	int b = 75;	// 75 is same as 0113 (in octal), 0x4b (in hexadecimal)
	float f(1.6e-19); // same as 1.6x 10^-19; another way to initialize a variable, without using =
	float e = { 6.02e23 }; // same as 6.02 x 10^23, another way to initialize a variable
	float g = 1.8;

	string greet = "hi \n";
	cout << greet;
	greet = "bye";
	cout << greet << endl;
	cout << "endl is same as \\n character" << endl; // use two \ characters to print \ in cout
	cout << "use of tab \\t", "character";
	char x = 'y';
	cout << x << endl;
	// Escape characters: 
	// \n newline, \r carriage return, \t tab, \v vertical tab, \b backspace, \f form feed
	// \' single quote, \" double quote, \a alert, \? question mark, \\ backslash


	string s1 = "This"  "is"     "a" "single" "string\n"; // Thisisasinglestring
	string s2 = "This" " " "is" " "  "a"  " " "single" " " "string";
	// This is a single string
	cout << s1;
	cout << s2 << endl;
	int s = sizeof(s1);
	cout << s << endl;
	string s3 = "This string is written in \
two lines";
	cout << s3 << endl; // \ merges the text/code written in the current and next line



	double rad = 2.0;
	double area = 2 * pi * rad;
	cout << area;
	cout << newline;
	cout << "#define newline is used" << endl;


	int p, q, r;
	p = (q = 2) + 2; // value of a variable can be assigned in the middle of an expression
	cout << p << endl;
	r = q = 10;
	cout << p + q + r << endl; // result is 24
	cout << (int)g << endl; // g = 1.2 gives 1, g = 1.9 gives 1, int(g) typecasting is same as (int)g

	if (2 + 19)
	{
		cout << "False";
	}
	else cout << "True";
	/*
	a += b gives a = a + b
	x *= y + 1 gives x = x * (y+1)
	+xx; x+=1; x=x+1; all are same
	
	x = 3; y = ++x; x is 4, y is 4, value is added and then assigned
	x = 3; y = x++; x is 4, y is 3, value is assigned and then added
	
	Relational: ==, !=, >, <, >=, <=
	Logical: &&, ||, ! (AND, OR, NOT)
	
	condition ? result1 : result2 --> if condition is true, result1 is evaluated, else result2 is evaluated
	p>3 ? q=q+1 : r=r+1; Since condition is true, q=q+1 is evaluated, ans is 11

	int i;
	float j = 3.141;
	i = (int) j; 
	i = int (f); // both the above statements result in 3
	refer https://www.cplusplus.com/doc/tutorial/operators/ for operator precedence
	*/

	




	return 0;


}