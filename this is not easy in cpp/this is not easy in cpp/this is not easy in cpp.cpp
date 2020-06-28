// MEMORY ASPECT OF C++..



// this keyword is a self pointer

#include <iostream>
#include <string>


class Phone {

	std::string _name = "";
	std::string _os = "";
	int _price = 0;

public:
	Phone();// default constructor
	Phone(const std::string& name, const std::string& os, const int& price);// parameter constructor

	Phone(const Phone&); //copy constructor
	std::string getName() { 
		printf("value of getName is %p \n", this);

		return _os;
	};


	int getPrice();
	
	~Phone();

};
 
int Phone::getPrice() {

	printf("value of getPrice is %p \n", this);

	return _price;
}

Phone::Phone(const Phone& values) {
	puts("overwrite copy constructor");
	_name = "new-" + values._name;
	_os = "skinned-" + values._os;
	_price = values._price;
}

Phone::Phone() : _name(), _os("andy"), _price() {
	puts("default constructor");
};
Phone::Phone(const std::string& name, const std::string& os, const int& price) : _name(name), _os(os), _price(price) {
	puts("this is parameter constructor");
}

Phone::~Phone() {
	printf("destructor called for %s\n", _name.c_str());
}


int main() {


	Phone samsungA1;
	std::cout << samsungA1.getName() << std::endl;

	Phone Oneplus8("OP8", "android-oxygen", 790000);
	std::cout << Oneplus8.getName() << std::endl;

	printf("vlaue of object is %p \n", &Oneplus8);
	std::cout << Oneplus8.getPrice() << std::endl;


	Phone Oneplus8S = Oneplus8;
	std::cout << Oneplus8S.getName() << std::endl;






























	return 0;










}