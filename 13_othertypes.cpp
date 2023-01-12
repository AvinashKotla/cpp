#include <iostream>
#include <string>
#include <sstream>
using namespace std;

union uname
{
	int c;
	string str2;
	struct sname
	{
		int a;
		string str;
	}sobj;
};

//revisit union again

int main()
{
	/*
	There are two ways of creating customised datatype names: by using 'typedef' and by using 'using'
	1. typedef existing_type new_type_name;
	e.g.: typedef char C; typedef string str;
	2. using new_type_name = existing_type; 
	e.g.: using C = char; using str = string;
	*/
	
	/*
	using dig = int; // here dig is used synonymous to int
	using str = string; // here str is synonymous to string
	str mystr = "hello";
	dig i = 1;
	cout << i << "\t" << mystr;
	*/

	/*
	Unions are syntactically similar to structures
	Attributes of a structure share different memory location, whereas the members of a union share same memory location
	change in value of one of the attributes changes that of the others
	the size of the type is the size of the largest attribute
	*/
	



	return 0;
}
