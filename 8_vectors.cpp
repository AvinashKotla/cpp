#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

	/*
	unsigned int holds a bigger number than int
	vector<datatype> name; is the format, #include <vector> is necessary
	vect.size() returns the size of vector in unsigned int datatype
	vect.push_back(value) stores the value at the end position into the vector and resizes it
	vect.at(index) returns the element stored at that index position
	vect.begin() reads the vector from 0 position (from beginning)
	vect.insert(vect.begin() + index (optional), new value) adds elements value number of places from beginning

	e.g.: vect.insert(vect.begin() + 4, 200) adds 200 to index position 4
	if any other element is present at 4th index, it is pushed to right

	vect.erase(vect.begin() + index (opt.)) removes the value at that index
	vect.clear() returns all elements in the vector
	vect.empty() returns True/False (1 or 0) if vector is empty/not empty

	*/


	vector<int> vect; //declaration, size is flexible, can change as more elements are added
	vect.push_back(97); // add the value 25 as an element to the vector vect
	vect.push_back(98);
	vect.push_back(99);
	vect.push_back(100);
	vect.push_back(101);

	cout << "Vector: ";

	for (unsigned int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << ", ";
	}
	// O/p: Vector: 97, 98, 99, 100, 101, 
	vect.insert(vect.begin(), 102);

	cout << "Vector: ";

	for (unsigned int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << ", ";
	}
	// O/p: Vector: 97, 98, 99, 100, 101, Vector: 102, 97, 98, 99, 100, 101,
	// here, 102 is added at the beginning
	vect.insert(vect.begin() + 5, 103);
	cout << endl << "Vector: ";

	for (unsigned int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << ", ";
	}
	// O/p: Vector: 97, 98, 99, 100, 101, Vector: 102, 97, 98, 99, 100, 101,
	// Vector: 102, 97, 98, 99, 100, 103, 101,
	// Here, 103 is added after 5th element

	vect.erase(vect.begin() + 3);
	cout << endl << "Vector: ";

	for (unsigned int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << ", ";
	}
	/* O/p:
	Vector: 97, 98, 99, 100, 101, Vector: 102, 97, 98, 99, 100, 101,
	Vector: 102, 97, 98, 99, 100, 103, 101,
	Vector: 102, 97, 98, 100, 103, 101,
	element at index 3 (i.e. 99) is removed
	*/








	return 0;


}