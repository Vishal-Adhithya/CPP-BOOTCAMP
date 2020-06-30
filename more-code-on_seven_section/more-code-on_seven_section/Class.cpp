#include "Class.h"
/*
class User {	
	// ANY THING WE DEFINE INSIDE THE CLASS IS CALLED DATA MEMBERS...
	// INORDER TO ACCESS PRIVATE DATA MEMBER WE USE GETTERS AND SETTERS...

	int _secret = 22;

public: 
	std::string name = "default";
	void classMessage();
	void setSecret(const int& newsecret) { _secret = newsecret;}
	int getSecret()const;

};

*/

class Phone {
	std::string _name = "";
	std::string _os = "";
	int _price = 0;

public:
	//constructor is a exact method in the class which is simply same as the name of the class...
	Phone(); //default constructor
	Phone(const std::string& name, const std::string& os, const int& price);
	//overriding the properties

Phone(const Phone&);//copy constructor // over riding the copy constructor...

	std::string getName() { return _os; }
//destructor:
		// when ever you create an object a memory is being reserved for your object og the object class
   ~Phone();


};
