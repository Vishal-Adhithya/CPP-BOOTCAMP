#include <iostream>
#include <string>

// STL -> STANDARD TEMPLATE LIBRARY

// IT TAKES GENERIC PROGRAMMING TO NEXT LEVEL..


// WHAT IS GENERIC PROGRAMMING?

// DATA TYPE ARE NOT SPECIFIED AT THE TIME OF IMPLEMENTATION OF CODE LOGIC...

// GENERIC PROGRAMMING..
using namespace std;


template<typename T>
T getBigger(T a, T b) {
	return(a > b) ? a : b;// make sure that a gets return or b get return 

}


int main()
{

	cout << getBigger('b', 'a') << endl;// ASCII Value of the character..



	return 0;
}