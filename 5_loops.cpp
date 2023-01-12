#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	int num, n1, n2, big, price, quantity, i, j, x, y;

	string str, str1, str2, str3, mystr;

	
	/*

	cout << "Enter two numbers \n";
	cin >> n1 >> n2;
	if (n1 > n2)
		big = n1;
	else big = n2;
	cout << "The larger number among " << n1 << " and " << n2 << " is " << big << endl;

	*/

	/*

	cout << "Enter a string \n";
	cin >> str; // cin takes only one word as input, considers spaces, newlines as separators
	cout << "The string is " << str << endl;

	*/

	/*

	x = 5;
	if (x > 0)
		cout << "x is positive";
	else if (x < 0)
		cout << "x is negative";
	else
		cout << "x is 0";
	cout << endl;

	*/

	/*

	i = 10;
	while (i >= 0)
	{
		cout << i << "\n";
		i--;
	}

	*/

	// do-while loop is preferred over while, when the required statement needs to be printed atleast once.

	/*

	i = 10;
	do
	{
		cout << i << endl;
		i--;
	} while (i > 0);

	*/

	/*

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "x" << j << " = " << i * j << "\n";
		}
		cout << endl;
	}
	*/

	/*
	Every for loop should have the three expressions, or atleast the semicolons for syntax to be valid
	Valid alternatives to for loop:

	for ( ; ; ;) is an example of infinite loop, as it has no condition
	for ( ;i<=100;i++) is an example of while loop, where i is initialized before for loop
	for (i=0,n=100;n>i;i++,n--) is executed 50 times before the condition becomes false
	for (int i:array) is a range based syntax for for-loop

	break statement exits a loop
	switch statements is similar to using a number of if-else statments, except that the switch expressions evaluate to constants


	*/

	/*
	for (int a = 0, b = 100; a < b; a++, b--)
	{
		cout << "a = " << a << " is less than " << "b = " << b << endl;
	}
	cout << "Not anymore! \n";

	*/

	/*
	cout << "Enter a sentence \n";
	getline(cin, str);

	for (char c : str)
	{
		cout << c << endl;
	}
	*/
	
	/*
	int arr[] = { 1,2,7,8,9,10 };
	for (int i : arr )
	{
		cout << i << endl;
	}
	*/

	/*
	j = 0;
	for (int i = 1; i <= 1000; i=i+2)
	{
		cout << "Now value of i is " << i << endl;
		j += 1;
		if (i % 29 == 0)
		{
			cout << "29 is detected after " << j << " iterations. Aborted! \n";
			break;
		}

	}
	*/

	/*
	j = 10;
	gt:
	cout << "j is " << j << endl;
	j--;
	if (j >= 0)
		goto gt;
	cout << "j will now go towards negative \n";
	*/

	/*
	int day;
	cout << "Enter a number between 1 and 7 \n";
	cin >> day;

	switch(day)
	{
		case 1:
			cout << "Today is Monday, i.e., " << day << "th day" << endl;
			break;
		case 2:
			cout << "Today is Tuesday, i.e., " << day << "th day" << endl;
			break;
		case 3:
			cout << "Today is Wednesday, i.e., " << day << "th day" << endl;
			break;
		case 4:
			cout << "Today is Thursday, i.e., " << day << "th day" << endl;
			break;
		case 5:
			cout << "Today is Friday, i.e., " << day << "th day" << endl;
			break;
		default:
			cout << "Today is the weekend! Enjoy! \n";
			break;
	}
	*/

	/* The below set of lines will give error, as the switch statement cannot handle any datatype other than
	those that evaluate to an integer (constant)
	char d;
	cout << "Enter a day of the week \n";
	cin >> d;

	switch (d)
	{
	case "Monday":
		cout << "Today is the first day \n";
		break;
	default:
		cout << "Enjoy the weekend \n";
		break;
	}
	*/

	




	return 0;

}
