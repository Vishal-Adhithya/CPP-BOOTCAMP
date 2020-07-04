/*
#include <iostream>
#include<string>
#include <conio.h>

using namespace std;

int main() {



	int a, b, temp;

	cout << "Enter your first number: ";
	cin >> a;
	cout << endl;
	cout << "Enter your second number: ";
	cin >> b;
	cout << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "this is the value for a " << a << endl;
	cout << "this is the value for b " << b << endl;
}*/

/* // LEARN CODE ONLINE.IN

#include<iostream>
#include<string>







void swap(int& a, int &b) {

	int tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);


}

std::string printMe() {
	return "I am print";
}


int main() {


	// MOVE SEMANTICS....

	//


	int a = 3;
	int b = 4;

	swap(a, b);

	std::cout << "the value of the a is: " << a << std::endl;
	std::cout << "the value of the b is: " << b << std:: endl;

	std::string s = printMe();
	std::string&& ss = printMe();

	std::cout << "the move semantics... " << ss << std::endl;
	std::cout << "the move semantics... " << printMe()  << std::endl;





	return 0;
}
*/

// THE CHERNO...


#include <iostream>
#include<string>

void SetValue(int value) {
	
}


/*
int& Getvalue()
{	
	static int value = 10;

	return value;
}*/


int main() {

	//int i = Getvalue();
//	Getvalue() = 5;	// this is not gonna work because we are assigning a rvalue to a lvalue...
//	Getvalue() = 5;  // now this works becuse we are get a reference in the getvalue and changing it into rvalue...

	int i = 10;
//	SetValue(i);
	//setvalue(10);


}



//BLOG POST...



/*

	the left side of the assignment statement is lvalue, An lvalue refers to an object that persists
	beyond a single expression. An rvalue is a temporary value that does not persist beyond the expression that uses it




	Pulls or fetches the value stored in a variable or constant







*/



