#include<iostream>
#include <string>

using namespace std;

class Man {

	string _name;
	int _age;
	Man() {}	// this trick is for nobody should create objects from this... the default constructor will be disallowed... 
	friend class Superman;
	friend class Spiderman;
	// using friend the private class can be used as a public class and that is a big disadvantage




				// protected means that the child classes want to use these codes.........
protected:
	// first we are going to override the constructor
	// we are creating variable with referece...
	// then inserting to everyone 



	Man(const string& name, const int& age)
		: _name(name), _age(age) {}			// the parametric construction is over written....
	// the above lines are helper classes which allow you to create more interesting class...
	int getAge() { return _age; }
	void run() { puts("I can run "); }

public:
	// private cannot defined outside...
	void sayName()const; // we can put const because it's not gonna change any thing

};

void Man::sayName()const {

	cout << "My name is: " << _name << " and age is " << _age << endl;
}

// superman
// inheritance

class Superman : public Man {

	bool flight;
public:
	Superman(string name) : Man(name, 26) {}

	//void run() { printf("I can run at light speed %d\n  ", getAge()); }// done with getters and setters
	void run() { printf("I can run at light speed %d\n  ", _age); }


};

class Spiderman : public Man {

	bool webbing;
public:
	Spiderman(string name) : Man(name, 19) {};

	void run() { printf("I can run at light speed %d\n  ", _age); }




};




int main() {


	Superman clark("Kent");// constructor rule....
	clark.sayName();
	clark.run();

	Spiderman peter("parker");
	peter.sayName();
	peter.run();




	return 0;
}
// friend keyword...