#include "stdafx.h"
#include <iostream>
using namespace std;

template < class T >

T maximum( T value1, T value2 ) 
{
  if ( value1 > value2 )
		return value1;
	else
		return value2;
} 

int main()
{

	int int1;
	int int2; 
	cout<< "Input two integer values: ";
	cin >> int1 >> int2;
	cout << "The larger integer value is: " << maximum( int1, int2 );
	char char1;
	char char2; 
	cout << "\n\nInput two characters: ";
	cin >> char1 >> char2;
	cout << "The larger character value is: " << maximum( char1, char2 );
	double double1; 
	double double2; 
	cout << "\n\nInput two double values: ";
	cin >> double1 >> double2;
	cout << "The larger double value is: " << maximum( double1, double2 )
		<< endl;
} 
