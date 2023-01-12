#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void prntarr(int arr[], int len) // use of arg[] helps in receiving arrays as function arguments
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

}





int main()
{
	/*
	int c, len;
	int a[5] = {1,2}; // a is an array of 10 integers, a[0] is the first element, a[9] being the last
	float b[] = { 1.0,2.0,4.0,8.0,16.0,32.0 }; // another way of declaring and initializing an array
	*/
	
	// since a is of length 5 and 2 elements are initialized, all the others are set to zero, i.e., a[2], a[3] and a[4] are 0
	// elements are accessed using a[i] notation
	// For an array of n elements, a[0] to a[n-1] is the indexing available to access the elements
	
	/*
	int aa[10] = { }; // declares an array of 10 zeros
	int bb[4] = { 1,2,3,4 };
	int bb2[4]{ 1,2,3,4 }; // both ways of defining an array is correct
	*/

	/*
	int a[100];
	int i, s = 0, len;
	cout << "Enter the length of the array less than 100 \n";
	cin >> len;
	cout << "Enter the elements of the array \n";
	for (i = 0; i < len; i++)
	{
		cin >> a[i];
		s = s + a[i];
	}
	cout << "The sum is " << s << endl;
	*/

	/*
	int a[10][10];
	int m,n;

	cout << "Enter the size of the matrix, row by column \n";
	cin >> m >> n;
	cout << "Enter the elements row-wise \n";

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "The elements in matrix form are:\n";

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	*/

	/*
	int h = 3, v = 4, i, j;
	int a[h * v]; // expression did not evaluate to a constant (check once)
	pr
	for (int m = 0; m < h; m++)
	{
		for (int n = 0; n < v; n++)
		{
			cin >> a[m * h + n];
		}
	}
	*/

	// function receiving array as input should have this format: type funcname(type arrname[], int size)
	// function call should be of this format: funcname(arrname,size)
	/*
	int p[] = { 1,2,3,4,5 };
	int q[] = { 1,3.4,4.8,8 }; //decimal part is ignored (not rounded-off) since array is of int type and elements are of float type
	prntarr(p, 5);
	prntarr(q, 4);
	*/
	
	//int r[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	//int s[][] = { {1,2,3}, {4,5,6}, {7,8,9} }; gives error since size is not specified during declaration

	
	char a[6] = { "Hello" };	// is a character array of 20 elements
	char b[] = { 'H','e','l','l','o','\0' };
	char c[] = { 'H','e','l','l','o' };
	cout << a << endl << b << endl << c << endl;
	

	/*
	Character array when initialized with characters and not by string literals (as in a) should be ended with \0 character
	If not, garbage values will be appended to the output when printing such arrays, like:

	Hello╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠=▒6┤½§ as oppposed to Hello or Hello respectively for a and b arrays

	a = {"Hello"}; or a = {'h','i'}; are invalid, as arrays cannot be initialized values without specifying their size during declaration
	a[0] = 'H'; a[1] = 'i'; are valid, as individual positions can be assigned
	character array length is including the null character \0 at the end (\0 signifies the end of the array)
	Hence, number of elements assigned/initialised should be 1 less than the total length
	char a[5] = {"Hello"}; will give error, since there is no space left for the null character to be appended at the end of the character array
	char ch[10]; // declares a character array of size 10
	ch[10] = "hello"; would give error
	ch[10] = {"hello"}; would also give error
	Initializing a character array separately after declaration is invalid
	Size of array (integer and/or character type) is determined during compilation, and hence have to be declared (or initalized) before use
	Character arrays always end with null characters, even when they are initialized using string literals
	Strings on the other hand, don't require their size to be mentioned and do not end with null character
	*/
	
	










	return 0;
}