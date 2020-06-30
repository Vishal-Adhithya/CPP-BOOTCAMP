#include <iostream>
#include <string>
#include "Class.cpp"
/*

int main() {
	
	User sam;
	sam.name = "sam";
	sam.classMessage();
	sam.setSecret(333);
	std::cout << sam.getSecret() << std::endl;
	
	User hitesh;
	hitesh.classMessage();// we didn't assign a value it will be the default value will be there...
	hitesh.name = "hitesh";
	hitesh.classMessage();


	User vishal;
	vishal.name = "vishal";
	vishal.classMessage();


	const User rock;
	std::cout << rock.getSecret() << std::endl;
	

	// behind the scene a copy constrctor was invoked...
	// this is copy constructor is the responsible for all the properties...
	User peter = sam;// the name getsecret all of the properties are copied to the peter by assigning sam to peter...


	std::cout << "peter name is: "<< peter.name << std::endl;
	std::cout << "peter secret  is: " << peter.getSecret() << std::endl;



//	std::cout << sam.setSecret << std::endl;
	// NON CONSTANT OBJECTS CAN ACCESS CONSTANT METHODS 
	// CONSTANT METHOD CANNOT ACCESS NON CONSTANT METHOD
	
	// method separation and const qualified methods...
	// 


	// constructor destructor and rule of three...
	//constrctor is a method which is called as soon as you create an object....
	//if you don't declare a constructor a implicit constructor is called for you kind of behind the scene...

	// constructors reserve memory for us...
	// 
																																																																																																																					
	return 0;

}*/




#include<iostream>
#include <string>

int main() {

	Phone samsungA1;// if i build it now it will fail because it has a lot of doesn't have any type of the body...
	std::cout << samsungA1.getName() << std::endl;//there will be an empty line because the os name is empty

	Phone OnePlus8("OP8", "android-Oxy", 799);
	std::cout << OnePlus8.getName() << std::endl;

	Phone Oneplus8S = OnePlus8;

	std::cout << Oneplus8S.getName() << std::endl;
	return 0;



	 
}
