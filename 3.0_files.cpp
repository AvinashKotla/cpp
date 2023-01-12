#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

bool check(string str) 
{
	for (int i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return false;
	return true;
}

int main()
{
	/*
	int num = 100;
	string str = "Hello";
	string str2 = "This is a really long and a single string";

	cout << "The value stored in num is: " << num << endl;
	cout << "Size of the integer variable num is " << sizeof(num) << " bytes" << endl;
	cout << "The value stored in str is: " << str << endl;
	cout << "Size of the variable string str is " << sizeof(str) << " bytes" << endl;
	cout << "The value stored in str2 is: " << str2 << endl;
	cout << "Size of the string variable str2 is " << sizeof(str2) << " bytes" << endl;
	*/

	/*
	The endl manipulator produces a newline character, exactly as the insertion of '\n' does; 
	but it also has an additional behavior: the stream's buffer (if any) is flushed, which means 
	that the output is requested to be physically written to the device, if it wasn't already. 
	This affects mainly fully buffered streams, and cout is (generally) not a fully buffered stream. 
	Still, it is generally a good idea to use endl only when flushing the stream would be a feature 
	and '\n' when it would not. Bear in mind that a flushing operation incurs a certain overhead, and
	on some devices it may produce a delay.
	*/
	
	/*// doesn't work
	int i; 
	cout << "Input a number\n";
	cin >> i;
	if (isdigit(i) == false)
	{
		cout << "Enter a number you fool!\n";
	}
	else
	{
		cout << "The content entered is " << i << endl;
	}
	*/

	/*
	string str = "sunidhi";
	if (check(str))
		cout << str << " is an integer" << endl;
	else
		cout << str << " is a string" << endl;
	string str1 = "1234";
	if (check(str1))
		cout << str1 << " is an integer";
	else
		cout << str1 << " is a string";
	*/
	/*
	string name, name2;
	cout << "What is your name? The response should start with: My name is \n";
	//cin >> name;
	getline(cin, name);
	cout << "The response entered is: " << name << endl;

	cout << "Enter the name once again with the required format\n";
	getline(cin, name2); // #include <string> header is required for getline()
	cout << "The response entered is: " << name2 << endl;
	*/
	
	/*
	A string variable takes in only one word as input when cin is used to receive inputs
	But if getline() is used, a string can take an entire line (however big the line is)
	If a collection of a few words (a sentence) is input for a string using cin,
	only the first word is stored. The subsequent words are stored when the cin is used as input
	for other string variables or when getline() is used
	*/

	/*
	// this will take only as many words in the sentence entered as value of i in for loop for cin
	// each word in the sentence (separated by spaces) is stored as a string element
	string str[100];
	cout << "Enter a sentence\n";

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << str[i] << " ";
	}
	*/

	/*
	string strnum = "1234";
	int num;
	stringstream(strnum) >> num; // #include <sstream> is required for stringstream
	// if numbers are stored as strings, stringstream is used to extract the number and store it into an integer variable
	cout << "String is: " << strnum << endl;
	cout << "Integer part is: " << num << endl;
	*/
	
	
	
	/* writing and reading from a text file
	int num = 100, n;
	string str;
	ifstream ipf; ofstream opf;
	*/
	/*
	opf.open("one.txt");
	opf << "Line one\n";
	opf << "Line two\n";
	opf << num;
	opf.close();
	*/

	/*
	opf.open("two.txt");
	// muliple declaration doesn't work in for loop; for(int i=0, int n=100;i<5;i++) gives error
	// but multiple initialization and increments work
	for (int i = 0, n=100; i < 5; i++, n++)
	{
		opf << n << endl;
	}
	opf.close();



	ipf.open("two.txt"); // contains numbers 100 to 104 in each line
	ipf >> num;
	cout << num << endl;
	ipf >> num;
	cout << num << endl;
	ipf >> num;
	cout << num << endl;
	ipf >> num;
	cout << num << endl;
	ipf >> num;
	cout << num << endl;
	ipf >> num;
	ipf >> num; // ipf is called 6 times while there are only 5 numbers in the file
	cout << num << endl;

	// ipf takes the value from the text file and stores it in num
	// when ipf is called again, the control moves to the next line and the number in the new line is accessed and stored in num
	// when the numbers are exhausted (ipf called 10 times when there are only 5 numbers n the file),
	// ipf stores the last number available, in num and displays it when cout is used
	*/




}