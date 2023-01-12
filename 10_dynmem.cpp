#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void print()
{
	string* name = new string("morning");
	cout << "Hi and a great " << *name << " to you \n";
	delete name;
	/*
	If we don't use delete name command, even though the variable is local to the function print(),
	the memory dynamically allocated is not deleted. Hence, delete should be used
	If the function print() is called multiple times, multiple memory is allocated dynamically and
	not deleting would lead to unnecessary blocking of memory space
	*/

}


int main()
{
	/*
	1.1 There are two types of sections of memory in computer (among other sections): stack and heap
	1.2 Stack section is used for functions and variables, parameters required by the functions
	1.3 Stack is generally 1 MB big (depends on the system used) and is static (cannot be changed)
	1.4 e.g.: array size should be specified prior to initilizing or using it

	2.1 Heap is a bigger section than stack and is preferred if programming consumes large chunks of storage
	2.2 Heap memory can be resized as per requirement
	2.3 e.g.: dynamic memory allocation
	*/

	
	int num = 100; //static (stack) memory allocation
	int* ptrnum = new int;
	// ptrnum is a pointer (stored on stack) pointing to an integer variable (stored on heap) due to new int declaration on RHS

	*ptrnum = 1000; //dereferencing
	// the value 1000 is stored on heap as it is pointed by ptrnum and the way ptrnum is declared (using new int)


	cout << *ptrnum << endl;
	delete ptrnum; // deletes the space allocated for the integer pointed by ptrnum
	
	
	/*
	once the memory is deleted, the pointer remains 'dangling' and still 'points' to the space it was alloted before(to the
	space that doesn't exist anymore). To avoid such dangling pointers, the ptrnum has to be reassigned to a null pointer or
	to the memory address of a new variable
	*/
	//ptrnum = nullptr;
	ptrnum = new int;
	print(); //function call

	/*
	double* arr = new double[5];
	arr[0] = 3.14;
	arr[1] = 1.693;
	arr[2] = 6.626;
	arr[3] = 9.1;
	arr[4] = 6.672;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr; // deallocates the memory

	string* numbers = new string[3]{ "one", "two", "three" };
	cout << *numbers << endl; // prints first element
	cout << *(numbers + 1) << endl;
	cout << numbers[2] << endl;

	string* names = new string[3];
	cout << "Enter the names \n";
	for (int i = 0; i < 3; i++)
	{
		cin >> names[i];
	}
	for (int i = 0; i < 3; i++)
	{
		cout << names[i] << endl;
	}
	delete[]names;
	*/

	//2D dynamic arrays
	/*
	int order, axes = 2;
	cout << "Enter the order of the Bezier curve you need: " << endl;
	cin >> order;

	double** coord = new double* [order + 1];
	for (int i = 0; i < order + 1; ++i)
	{
		coord[i] = new double[axes];
	}

	cout << "Enter " << order + 1 << " " << axes << "D coordinates : " << endl;
	for (int i = 0; i < order + 1; ++i)
	{
		for (int j = 0; j < axes; ++j)
		{
			cin >> coord[i][j];
		}
	}

	cout << "Points entered are: " << endl;
	for (int i = 0; i < order + 1; ++i)
	{
		for (int j = 0; j < axes; ++j)
		{
			cout << coord[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < order + 1; ++i)
	{
		delete[] coord[i];
	}
	delete[] coord;
	coord = NULL;
	*/

	// 1D arrays
	int div = 100;
	double* t = new double[div+1];
	for (int i = 0; i <= div; ++i)
	{
		t[i] = double(i) / 100;
		//cout << t[i] << endl;
		cout << *(t + i) << endl; // gives heap corruption error if size is div instead of div+1
	}
	delete[] t;
	t = NULL;

/*
	// Dimensions of the 3D array
    int x = 2, y = 3, z = 4;
    int count = 0;
 
    // Allocate memory blocks of size
    // x i.e., no of 2D Arrays
    int*** a = new int**[x];
 
    for (int i = 0; i < x; i++) {
 
        // Allocate memory blocks for
        // rows of each 2D array
        a[i] = new int*[y];
 
        for (int j = 0; j < y; j++) {
 
            // Allocate memory blocks for
            // columns of each 2D array
            a[i][j] = new int[z];
        }
    }
 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
 
                // Assign values to the
                // memory blocks created
                a[i][j][k] = ++count;
            }
        }
    }
 
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
 
                // Print values of the
                // memory blocks created
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
 
    // Deallocate memory
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            delete[] a[i][j];
        }
        delete[] a[i];
    }
    delete[] a;

	*/

	return 0;
}