#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	/*
	fstream is the preprocessor required for writing and reading files
	ifstream is to read, ofstream is to write
	ifstream ipf; ifstream read; ifstream input; ofstream opf; ofstream write; ofstream output;
	all the above valid statements assign an object to the classes ifstream and ofstream
	ipf.open("abc.txt") opens an existing file to read
	opf.open("xyz.txt") opens or creates a new file to write

	opf << str; writes a string str into the file opened by opf
	opf << data; will overwrite any previously written content in the file every time this command is encountered
	opf.open("xyz.txt",ios::app) => can add new data without overwriting the previous one

	ipf >> str; will read a string from the file
	cin >> str; extracts only one word (or till it encounters a space)
	getline(cin, str); extracts the entire line

	ipf.close(); opf.close(); close the file after reading from or writing to it
	*/



	/*
	string str;
	int n;
	ofstream opf;
	cout << "Enter the number of students \n";
	cin >> n;
	// ios_base::app is used if content is to be appended instead of rewritten
	// opf.open("list.txt", ios_base::app); is the syntax
	opf.open("list.txt");
	opf << "Name	Roll number\n";
	cout << "Enter the name and roll number\n";
	for (int i = 0; i < n; i++)
	{
		getline(cin, str);
		opf << str << endl;
	}
	opf.close();
	*/

	string word;
	unsigned int count = 0;
	char letter; //for letter
	int i = 0, n = 0;

	ifstream ipf;
	ofstream opf;
	ipf.open("scrabble.txt");
	opf.open("scrbcopy.txt", ios::app);
	if (!ipf)
	{
		cout << "File did not open!\n";
		system("pause");
	}
	else
		cout << "File opened for input\n";

	if (ipf.fail())
	{
		cerr << "Error opening file\n"; // this message is displayed if filename is wrong or ...
		exit(1);
	}

	ipf >> word;
	//opf << word << " ";
	while (!ipf.eof())
	{
		count++;
		cout << setw(5) << word; // #include <iomanip> is required for this line to run
		if (count % 20 == 0) // 15 words per line
		{
			cout << endl;
			n++;
		}
		//system("pause"); // pauses after each word is printed and asks for press any key to print nex word
		ipf >> word;
		//opf << word << " ";
	}

	cout << endl << endl;

	cout << "Total words in the file: " << count << endl;
	cout << "Total number of lines printed: " << n << endl;

	/*
	After the first while() loop is executed in displaying 15 words in a line,
	as per (!ipf.eof()), the control is at the end of the file and it begins to compile from there.
	Since there are no words left, it shows that there are 0 words that begin with letter s.
	We now have to bring the control back to the beginning of the file.
	It can be done by closing the file (ipf.close()) and reopening it before the next operation.
	Or, it can be done using: ipf.seekg(0,ios::beg);
	*/

	ipf.seekg(0, ios::beg); // reset the file to beginning

	cout << "Enter a letter \n";
	cin >> letter;
	count = 0;
	n = 0;
	ipf >> word;

	while (!ipf.eof())
	{
		if (letter == word.at(0))
		{
			count++;
			cout << setw(5) << word; // #include <iomanip> is required for this line to run
			if (count % 20 == 0) // 15 words per line
			{
				cout << endl;
				n++;
			}
			//system("pause"); // pauses after each word is printed and asks for press any key to print nex word
			//ipf >> word; this will print if first letter of the word matches the letter asked
		}
		ipf >> word;
	}
	/*
	If the letter selected is d, then the outer if() loop will print only those words that
	begin with d (letter == word.at(0)). Hence the further cout statements are not printed.
	To avoid this, change the position of ipf>> word outside the outer if() loop.
	*/
	cout << endl << "There are " << count << " words that begin with " << letter << endl;
	cout << "Number of lines printed: " << n + 1 << endl;

	/*


	ipf.close();
	opf.close();

	int num = 100, n;
	string str;
	ifstream ipf; ofstream opf;

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