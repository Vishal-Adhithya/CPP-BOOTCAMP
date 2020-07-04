// INCLUDE THE WEAK POINTERS....


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
		cout << "tested the function\n";
	}


};





int main() {

	{
		//unique_ptr<User> sam(new User());

		unique_ptr<User> sam = make_unique<User>();
		sam->testFunc();
	}
	{
	// this is a bad practice incase of memory leakes
		//shared_ptr<User> time(new User());
		
		
		shared_ptr<User> tim = make_shared<User>();
		// in the case of create a pointer it keeps the memory in the stack..
		// when the all the reference memory are gone it actually deletes the memory

		// but using a new keyword u are wasting a memory
		// to keep the count of creating a another memory  in the heap
		// wasting memory...

		// shared pointer are usually in the same syntax without the unique...
		// in shared pointers the we can assign a variable to another pointer..

		shared_ptr<User> timm = tim;


		weak_ptr<User> timmmm = tim;

		// there is no weak pointer create but the weak pointers can assign...
	}







	return 0;
}