#include <iostream>
#include<string>
#include <memory>
using namespace std;




class User {
public:
	User() {
		cout << "User created\n";

	}
	~User() {
		cout << "User destroyed\n";
	}
	void testFunc() {
		cout << "I am a test function \n";
	}

};

// define destructor....
// destructors are members fucntions in a class that delete an object when they are at the end of scope(function, program)

// define constructor...
// constructors is a special method that is automatically called when an object of the class is creted.
// Name of the constructor is the same as the call nem and it it useful when you want to intialize some value...



int main() {

	// uniique pointers are alwaysbe unique
	// UNIQUE POINTERS FREE THE MEMORY AFTER THE SCOPE ENDS...
	// you cannot copy unique pointers...
	// if a traditional pointer is pointing   to a memory address .
	// if the reference gets deleted the pointer is gonna be freed up.
	// in the tradional pointer can also be pointed by to differented addresses.
	// if the one pointer is deleted the memory block gets free.
	// but the another pointer is still pointing to that memory...
	// here where the memory pointer comes handy...


	/*46


It's to access a member function or member variable of an object through a pointer, as opposed to a regular variable or reference.

For example: with a regular variable or reference, you use the . operator to access member functions or member variables.

std::string s = "abc";
std::cout << s.length() << std::endl;
But if you're working with a pointer, you need to use the -> operator:

std::string* s = new std::string("abc");
std::cout << s->length() << std::endl;
It can also be overloaded to perform a specific function for a certain object type. Smart pointers like shared_ptr and unique_ptr, as well as STL container iterators, overload this operator to mimic native pointer semantics.

For example:

std::map<int, int>::iterator it = mymap.begin(), end = mymap.end();
for (; it != end; ++it)
    std::cout << it->first << std::endl;*/







	{

	//	unique_ptr<User> sam(new User()); // non.fav way of devolpers...
		
		// everybody likes this way....

		unique_ptr<User> sam = make_unique<User>();

		sam->testFunc();

	//	unique_ptr<User> samm = sam;// this is not allow


	}
	cout << "outside code\n";

	return 0;


}
// scopes are actually defined using the curly braces....
