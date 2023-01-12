#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string word;
	int count = 0, line = 0;

	ifstream ipf;
	ofstream opf;

	//ipf.open("scrabble.txt");
	//ipf.open("sample.txt");
	ipf.open("large.txt");
	//opf.open("copy.txt", ios::app);
	// to open the contents of the file and display them in rows containing 15 words each
	while (!ipf.eof())
	{
		ipf >> word;
		//opf << word << " ";
		count++;
		cout << word << " ";
		if (count % 10 == 0)
		{
			cout << endl;
			//opf << endl;
			line++;
		}
	}
	cout << endl;
	//opf << endl;
	cout << "Total number of words: " << count << endl;
	//opf << "Total number of words: " << count << endl;
	cout << "Number of lines printed: " << line + 1 << endl;
	//opf << "Number of lines printed: " << line + 1 << endl;

	ipf.seekg(0, ios::beg); // brings control to beginning of the file


	// to display words alphabet-wise
	count = 0; line = 0;
	int c[128], l[128], p = 0;

	for (int i = 0; i < 128; i++, p++)
	{
		c[i] = p;
	}

	for (int j = 0; j < 128; j++)
	{
		while (!ipf.eof())
		{
			if (char(c[j]) == word.at(0))
			{
				count++;
				/*
				if ((word.back() == ",") || (word.back() == "."))
				{

				}
				*/
				cout << " " << word; // #include <iomanip> is required for this line to run
				if (count % 5 == 0) // 15 words per line
				{
					cout << endl;
					//opf << endl;
					line++;
				}
			}
			ipf >> word;
		}
		cout << endl;
		cout << "Total number of words starting with " << char(c[j]) << ": " << count << endl;
		ipf.seekg(0, ios::beg);
		l[j] = count;
		count = 0;
		line = 0;
		cout << endl;

	}
	unsigned int sum = 0;
	for (int k = 0; k < 26; k++)
	{
		sum += l[k];
	}
	cout << "sum: " << sum << endl;













	return 0;
}