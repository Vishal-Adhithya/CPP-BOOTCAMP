//POLYMORPHISM AND VIRTUAL

#include<iostream>
#include<string>

using namespace std;

class One {
public:
	virtual void intro() {
		cout << "I am One \n";
	}// no matter how much time you inheritance it will work fine...
};

class Two : public One{
public:
	void intro() {
		cout << "I am Two \n";
	}

};


class three : public One {
public:
	void intro() {
		cout << "I am three \n";
	}

};



int main() {

	One *a;
	Two b;
	three c;

	a = &b;
	a->intro();

	a = &c;
	a->intro();

	return 0;
}

// VIRTUAL KEYWORD ONLY COMES HANDY WITH POINTERS? WITHOUT POINTERS THERE IS NO USE OF VIRTUAL?

// ANS: YEAH, WE ALSO USE VIRTUAL WITH RUNTIME POLYMORPHISM, ALSO KNOWN AS LATE BINDING