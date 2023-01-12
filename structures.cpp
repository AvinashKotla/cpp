#include <iostream>
#include <string>
using namespace std;

struct address
{
	string street; // members of the structure address
	string area;
	string city;
	int pincode;
};

struct car
{
	string make;	// also called attributes
	int year;
	double cost;
};

struct student
{
	string name;
	int roll;
	double height;
	int weight;
};

struct book
{
	string domain;
	string title;
	string author;
};

void display(book bk) // here, functionname(datatype argument) is replaced by functionname(structname argument)
{
	cout << "Domain is " << bk.domain << endl;
	cout << "Title is " << bk.title << endl;
	cout << "Written by " << bk.author << endl;
}

void dispbyref(book& bk)
{
	cout << "Domain is " << bk.domain << endl;
	cout << "Title is " << bk.title << endl;
	cout << "Written by " << bk.author << endl;
}

book createnewbook(string domain, string title, string author)
{
	book bookf = { domain, title, author };
	return bookf;
}

struct person
{
	string name;
	int age;
	bool phd; // true for yes, false for no
};


int main()
{
	/*
	address home; // creating a new variable of datatype address (structure)
	address hostel;
	
	home.street = "ganesh godown";
	home.area = "amaravathi";
	home.city = "hospet";
	home.pincode = 583201;

	hostel.street = "pb road";
	hostel.area = "belur";
	hostel.city = "dharwad";
	hostel.pincode = 580011;

	cout << "Home address is: \n";
	cout << home.street << endl;
	cout << home.area << endl;
	cout << home.city << endl;
	cout << home.pincode << endl;
	*/


	/*
	car maruti, hyndai; // creating variables for the type car

	maruti.make = "dzire";
	maruti.year = 2003;
	maruti.cost = 600000.0;
	
	
	// if no values are stored in hyndai variable (via structure attributes, garbage values are stored
	
	cout << hyndai.make << endl; // gives an empty (blank) string as garbage value
	cout << hyndai.year << endl; // gives -858993460
	cout << hyndai.make << endl; // gives an empty (blank) string as garbage value
	cout << hyndai.cost << endl; // gives - 9.25596e+61
	
	// another way of initializing
	hyndai = { "Verna", 2010, 800000.0 };
	cout << hyndai.make << endl; 
	cout << hyndai.year << endl; 
	cout << hyndai.make << endl; 
	cout << hyndai.cost << endl; 
	*/


	/*
	student one = { "Harsha", 001, 1.65, 55 };
	student two = { "Subhaas", 002, 1.50, 57 };

	student list[5]; // array of students instead of creating individual new variables under the structure student
	list[0] = { "Harsha", 001, 1.65, 55 };
	list[2].weight = 50;
	list[2].height = 1.45;
	list[2].name = "Aman";
	list[2].roll = 002;

	// a new list (variable) under student struct is declared and initialized
	student list2[] = {
		{"Akash", 003, 1.51, 55}, 
		{"Bhanu", 004, 1.62, 60}, 
		{"Chandan", 005, 1.72, 52},
		{"Durga", 006, 1.56, 57}
	};
	
	cout << "Contents of list 2 are :\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Name:   " << list2[i].name << "\t ";
		cout << "Roll:   " << list2[i].roll << "\t ";
		cout << "Height: " << list2[i].height << "\t ";
		cout << "Weight: " << list2[i].weight << "\t ";
		cout << endl;
	}
	*/

	/*
	book book1 = { "FEM", "FEM fundamentals", "Oden" };
	display(book1);
	dispbyref(book1);
	
	book book2;
	book2 = createnewbook("Continuum Mechanics", "Non linear FEM", "Holzapfel"); //function call
	display(book2);
	*/

	person p1 = { "Biswas",34, 0 };
	person* prsnptr = &p1;

	cout << "Contents of the variable p1: " << endl;
	cout << "Name: " << (* prsnptr).name << endl;
	// dot (.) operator has precedence over dereferencing (*) operator
	// *(prsnptr).name, *(prsnptr.name), *person.(name) are wrong
	cout << "Name: using prsnptr->name " << prsnptr->name << endl;

	//dynamic allocation

	person* prpnt = new person;
	prpnt->name = "Bob";
	prpnt->age = 35;
	prpnt->phd = 1;

	cout << prpnt->age << endl;
	cout << prpnt->name << endl;
	cout << prpnt->phd << endl;

	delete prpnt; //to free up the dynamically allocated space
	prpnt = nullptr;











	return 0;
}