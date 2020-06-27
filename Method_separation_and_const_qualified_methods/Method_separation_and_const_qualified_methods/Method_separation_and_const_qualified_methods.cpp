#include<iostream>
#include<string>

class User
{
	int _secret = 22;

public:
	std::string name = "default";
	void classMessage() { std::cout << "thank you very much!" << name << std::endl; };

};








int main() {

	User vishal;
	


	vishal.classMessage();


	return 0;
}