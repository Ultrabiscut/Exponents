#include <iostream>
#include <string>
using namespace std;

//PROGRAM: Exponents
//AUTHOR: Tyler Timmins
//COURSE: ITSE 1307 2002
//DESCRIPTION: 


/*
In C++ there are no operators to preform exponential
operations or calculate square roots.

We have to use some pre-made functions for these two
math operations.

Syntax for Exponents:
	pow(base, power)


Syntax for Square Root:
	sqrt(value)


*/

int main()
{
	//display the result of 8 raised to the 5th power
	cout << "8 raised to the 5th is: " << pow(8, 5) << endl;


	//display the square root of 144
	cout << "The square root of 144 is: " << sqrt(144) << endl;


	//Concatenation - combining strings into one string
	cout << "Tyler" << " " << "Timmins" << endl;
	string sFirst = "Tyler";
	string sLast = "Timmins";
	string sName;

	sName = sFirst + " " + sLast;

	cout << "sName: " << sName << endl;


	return 0;
}