#include "ClassUser.h"
#include "class.cpp"
/*
void User::classMessage() {
	std::cout << "class is great, "  << name <<std::endl;
}
//THE NAME OF THE METHOD IS NOT ONLY THE NAME
// IT IS COMPRISED OF MANY  LIKE DATA TYPE AND THE PARAMETERS THE WE ARE SENDING
// EVEN THE CONST OR ANY KEYWORD MARK THERE WILL BE MENTION THERE

int User::getSecret()const { 
	return _secret; }


	*/
// this is a newer syntax which will have class name -> scope resolution operators ->    the method name -> a colon sign a default value what you want to set...


Phone::Phone() : _name(), _os("Andy"), _price(){// using this syntax you can pass some values to it
	puts("default constructors");
}
// first we need to accpt the values passed by the parametric constructor...
Phone::Phone(const std::string& name, const std::string& os, const int& price) : _name(name), _os(os), _price(price) {
	puts("this is parameter constructor");

}
// values is a kind of which will have all kinds of properties
Phone::Phone(const Phone& values) {

puts("overwrite copy constructor");
_name = "new-"+values._name;
_os = "skinned-" + values._os;
_price = values._price;
}// it takes every values of oneplus8 to oneplus 8S


Phone::~Phone() {
	printf("destructor called for %s\n",  _name.c_str());
	// constructor is called for create and object when you memory will be allocated to that...
	// for every single object a destructor is going to be called at the end of the thing...
}
