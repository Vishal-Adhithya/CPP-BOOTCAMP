#include <iostream>
#include <string>

class User {
	int _secret = 22;// default status before secret is private nobody can access it.

public:
	std::string name = "default";
	void classMessage();
	// by this method we can check the private member

	void setSecert(const int& newsecret) { _secret = newsecret; };// const is a protection layer

	int getSecret()const;

};

void User::classMessage(){
	std::cout << "Class is great," << name << std::endl;
}

int User::getSecret()const{
	return _secret; }


int main() {
	User sam;
	sam.name = "Sam";  
	sam.classMessage();
	sam.setSecert(333);

	std::cout << sam.getSecret() << std::endl;



	User vishal;
	vishal.classMessage();
	vishal.name = "vishal";
	vishal.classMessage();
	vishal.setSecert(322);

	std::cout << vishal.getSecret() << std::endl;

	const User rock; // const qualified object
	std::cout << rock.getSecret() << std::endl;
	// non const can access const objects but  const cannot  access non const methods....

	

	return 0;
} 