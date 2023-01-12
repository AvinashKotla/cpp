#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{

	int a[10][10], ta[10][10];
	ifstream ipf;
	ofstream opf;
	opf.open("mat.txt", ios::app);

	cout << "Enter the elements row-wise \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
			ipf >> a[i][j];
			//a[i][j] = i + j;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << "\t";
			opf << a[i][j] << "\t";
		}
		cout << endl << endl;
		opf << endl << endl;
	}
	cout << "Transpose is \n";
	opf << "Transpose is \n\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[j][i] << "\t";
			opf << a[i][j] << "\t";
		}
		cout << endl << endl;
		opf << endl << endl;
	}
	return 0;
}

