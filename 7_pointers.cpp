#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void passbyval(int x)
{
	x = 99;
}

void passbyref(int* x)
{
	*x = 66;
}

void passbyref2(int* x[], int len)
{
	for (int i = 0; i < len; i++)
	{
		*x[i] = 5;
	}
}


int main()
{
	/*
	int a = 10; // a is the variable that stores the value 10
	int* b = &a; // b is the pointer (variable) that stores the address of a
	int c = *b; // c is the variable that stores the value stored in the variable the pointer b points to (or value stored at the location stored by pointer)
	cout << "a is: " << a << endl;
	cout << "b is: " << b << endl;
	cout << "c is: " << c << endl;
	*/

	/*
	int *b; // here b is a pointer
	// int is the datatype of the value stored in the variable it points to, not the datatype of the pointer itself

	int a = 10;
	b = &a;

	cout << "Value of the varibale a is " << a << endl;
	cout << "Address of the variable a is " << b << endl;
	// the address changes after every execution
	// ex.: 000000504F8FF974, 00000071A9AFF9F4, 00000066ABAFF524 and so on
	// b = 20; gives an error: cannot convert from int to int*
	*/

	/*	
	int firstvalue = 5, secondvalue = 15;
	int* p1, * p2;

	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue
	*p1 = 10;          // value pointed to by p1 = 10
	*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
	p1 = p2;           // p1 = p2 (value of pointer is copied)
	*p1 = 20;          // value pointed to by p1 = 20

	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';
	*/

	// int *p1, *p2, p3; here p1, p2 are pointers, p3 is a plain variable

	/* different ways of using pointers for arrays and storing values in arrays using pointers
	int num[5];
	int* p;
	p = num;  // stores the address of the array num in the pointer p
	*p = 10; // stores 10 at num[0] position
	p++;  // moves to the next memory location
	*p = 20; // stores 20 at num[1] location
	p = &num[2];  *p = 30;
	p = num + 3;  // shifts 3 memory locations from num[0] to num[3]
	*p = 40;
	p = num;  
	*(p + 4) = 50; // shifts 4 memory locations from num[0] to num[4] 
	for (int i = 0; i < 5; i++)
		cout << num[i] << ", ";
	*/

	/*
	If in a given compiler, char takes 1 byte, short takes 2 and long takes 4 bytes of memory. And let following pointers be declared: 
	char *pnt1;
	short *pnt2;
	long *pnt3;
	Let the memory locations stored by pnt1, pnt2 and pnt3 be 1000, 2000 and 3000 respectively
	pnt1++; gives 1001
	pnt2++; gives 2002 (not 2001)
	pnt3++; gives 3004 (not 3001)
	The amount of increment and decrement in memory location happens on the basis of size of the datatype of the variables they point to
	*/

	/* postfix operators, such as increment and decrement, have higher precedence than prefix operators, such as the dereference operator (*)
	*p++   // same as *(p++): increment pointer, and dereference unincremented address
	*++p   // same as *(++p): increment pointer, and dereference incremented address
	++*p   // same as ++(*p): dereference pointer, and increment the value it points to
	(*p)++ // dereference pointer, and post-increment the value it points to 

	*/

	// If pnt is pointer to address of num (an integer variable), then *pnt = &num; is an invalid assignment statement
	
	/*
	int x;
	int* p1 = &x;				// non-const pointer to non-const int
	const int* p2 = &x;			// non-const pointer to const int
	int* const p3 = &x;			// const pointer to non-const int
	const int* const p4 = &x;  // const pointer to const int 

	const int * p2a = &x;  //      non-const pointer to const int
	int const * p2b = &x;  // also non-const pointer to const int
	*/

	/*
	int a = 1, d = 2 ;
	int *b;
	int **c; // pointer storing the address of a pointer
	b = &a; // stores address of variable a
	c = &b; // stores address of pointer b
	cout << a << "\t" << b << "\t" << c << endl;
	// *b = 10; will change the value stored in the variable pointed by b (value of a changes to 10)
	// *c = 20; is invalid, since c points to a pointer and a pointer cannot be assigned an integer value
	*c = &d; // is valid and the dereferencing operator stores the address of d (because c is a double pointer)
	cout << c << endl;
	*/

	/*
	int n1 = 10, n2 = 10;

	cout << "Value of n1 before passbyvalue function call: " << n1 << endl;
	passbyval(n1);
	cout << "Value of n1 after passbyvalue function call: " << n1 << endl;

	cout << "Value of n2 before passbyref function call: " << n2 << endl;
	passbyref(&n2);
	cout << "Value of n2 after passbyref function call: " << n2 << endl;
	*/

	/* Search for passing an array by reference
	int arr[5] = { 1,2,3,4,5 };
	int pnt[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}

	passbyref2(&arr[5], 5);
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << pnt[i] << " ";
	}
	*/

	/*
	int p, q[10];
	unsigned int r;
	double s, t[10];
	float u, v[10];
	char w, x[10];
	string y, z[10];

	cout << "int p takes          " << sizeof(p) << "bytes\n";
	cout << "int q[10] takes      " << sizeof(q) << "bytes\n";
	cout << "unsigned int r takes " << sizeof(r) << "bytes\n";
	cout << "double s takes       " << sizeof(s) << "bytes\n";
	cout << "double t[10] takes   " << sizeof(t) << "bytes\n";
	cout << "float u takes        " << sizeof(u) << "bytes\n";
	cout << "float v[10] takes    " << sizeof(v) << "bytes\n";
	cout << "char w takes         " << sizeof(w) << "bytes\n";
	cout << "char x[10] takes     " << sizeof(x) << "bytes\n";
	cout << "string y takes       " << sizeof(y) << "bytes\n";
	cout << "string z[10] takes   " << sizeof(z) << "bytes\n";

	cout << "Length of int q[10] calculated using sizeof() is " << sizeof(q) / sizeof(q[0]) << endl;



	int m[3];

	int* n0 = &m[0];
	int* n1 = &m[1];
	int* n2 = &m[2];

	cout << "Memory location of m[0] is " << n0 << endl;
	cout << "Memory location of m[1] is " << n1 << endl;
	cout << "Memory location of m[2] is " << n2 << endl;

	n0 += 4;
	cout << "New memory location of m[0] after addition is " << n0 << endl;


	One sample output of the above code is that n0 now points to a new variable that is 2 elements away from m[0] due to n0+=2
	Memory location of m[0] is 00000095F74FF5C8
	Memory location of m[1] is 00000095F74FF5CC
	Memory location of m[2] is 00000095F74FF5D0
	New memory location of m[0] after addition is 00000095F74FF5D0
	If it had been n0+=1, it would have shown 00000095F74FF5CC
	n0+=5 pushes it to 5 elements down form m[0] and hence 5x4 = 20 (because of int datatype) memory places
	*/

	/*
	int num = 10;
	int* ptrnum = &num;
	int* ptrnum2;

	cout << "Variable is num \n";
	cout << "Memory location of the variable num (using pointer, prnum) is " << ptrnum << endl;
	cout << "Memory location of the variable num (using & operator, &num) is " << &num << endl;
	cout << "Value stored in num is " << num << endl;
	cout << "Value stored in num using pointer is (using *ptrnum, called dereferencing) " << *ptrnum << endl;
	cout << "Size of the integer variable num is " << sizeof(num) << " bytes" << endl;
	cout << "Size of the pointer variable ptrnum is " << sizeof(ptrnum) << " bytes" << endl;
	cout << "Size of the pointer variable ptrnum is " << sizeof(ptrnum2) << " bytes" << endl;
	cout << "Memory location of the pointer variable ptrnum is (&ptrnum) " << &ptrnum << endl;
	*/

	/*
	//cout << n << endl;
	// even though it shows 'no issues found', uninitialized local variable 'n' used
	// same happens when a pointer variable is declared and not initialized with a memory location

	int num[10];
	num[0] = 1; num[1] = 2;

	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl;
	}
	// since only two values are stored in num[] array, garbage values (-858993460) are stored in other indices (from 3rd to 10th)
	*/

	/*
	An uninitialized pointer can point to variable of any datatype
	It can store addresses of locations that are not defined yet
	e.g.: int ar[5], *p; p = &ar[6]; is a valid statement even though ar[6] doesn't exist
	To prevent addresses of variables that don't exist, from being pointed to by pointers, null pointers are used
	*/
	/*
	int array[5] = { 1,2,3,4,5 }, * point;
	cout << "Address stored by using & operator: \n";
	for (int i = 0; i < 10; i++)
	{
	point = &array[i];
	cout << "array[" << i << "]" << " = " << point << endl;
	}
	*/


	/* Null pointers
	int a = 1;
	int* ptr = 0;
	int* ptr2 = NULL;
	int* ptr3 = nullptr;
	cout << "*ptr  = 0         gives " << ptr << endl;
	cout << "*ptr2 = NULL      gives " << ptr2 << endl;
	cout << "*ptr3 = nullptr   gives " << ptr3 << endl;
	*/

	/*
	double num[] = { 1.1,200.2,300.3,4.4 };
	double* ptrnum = num;
	cout << "The memory location of the first element of the array num[] is given by " << endl;
	cout << "num	 : " << num << endl;
	cout << "&num	 : " << &num << endl;
	cout << "&num[0] : " << &num[0] << endl;

	cout << "pointer variable pointing to num[] is ptrnum\n";
	cout << "Value stored in 1st location is (using *num) " << *num << endl;
	cout << "Value stored in 2nd location is (using *(num+1)) " << *(num + 1) << endl;
	cout << "Similarly \n";
	cout << "Value stored in 3rd location is (using *(num+2)) " << *(num + 2) << endl;
	cout << "Value stored in 4th location is (using ptrnum[3]) " << ptrnum[3] << endl;
	cout << "using *num + 1 gives (" << *num << " + 1) i.e., " << * num + 1 << " and not " << *(num + 1) << endl;
	*/

	/*
	int arr[] = { 12, 23, 21, 40, 10 };
	int* ptrarr = arr;

	cout << "Printing the values using traditional method, arr[i] \n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << "Printing the values using dereferenced pointers, ptrarr[i] \n";
	for (int i = 0; i < 5; i++)
	{
		cout << ptrarr[i] << " ";
	}
	cout << endl;
	*/
	/*
	const int b = 5; // prevents other values from being stored in variable b instead of 5
	int c = 5;
	const int* ptrb = &b; // tells that the variable ptrb is pointing is of const type (*ptrb = 10 will give error (dereferencing))
	cout << ptrb << endl;
	ptrb = &c; // new address is pointed by the same pointer
	cout << ptrb << endl;
	*/

	/*
	int b = 5; // prevents other values from being stored in variable b instead of 5
	int c = 5;
	int* const ptrb = &b ; // tells that the variable ptrb is pointing is of const type (*ptrb = 10 will give error (dereferencing))
	cout << ptrb << endl;
	cout << "ptrb = &c (with int c = 5) will give error since ptrb is a constant pointer \n";
	*/



	return 0;
}