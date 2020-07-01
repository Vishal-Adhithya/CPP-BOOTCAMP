#include<iostream>
#include <string>

using namespace std;

class Man {

	string _name;
	int _age;
	Man() {}	// this trick is for nobody should create objects from this... the default constructor will be disallowed... 
		// protected means that the child classes want to use these codes.........
protected:
	// first we are going to override the constructor
	// we are creating variable with referece...
	// then inserting to everyone 



	Man(const string & name, const int & age)
		: _name(name), _age(age){}			// the parametric construction is over written....
	// the above lines are helper classes which allow you to create more interesting class...
	
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

class Superman : public Man{

	bool flight;
public:
	Superman(string name) : Man(name, 26) {}
	
	void run() { puts("I can run at light speed "); }



};

class Spiderman : public Man {

	bool webbing;
public:
	Spiderman(string name) : Man(name, 19) {};

	void run() { puts("I can run at normal speed "); }



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