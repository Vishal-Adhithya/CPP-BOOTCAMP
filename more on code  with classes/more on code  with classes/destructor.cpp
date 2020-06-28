// destructor runs when a object gets destructed

#include<iostream>

class Entity {


public:
	float X, Y;


	// constructor name must be match the name of the classs..........
	Entity() {
		X = 0.0;
		Y = 0.0;
		std::cout << "created entity!" << std::endl;

	}

	// destructor start with this ~ sign and our name of our class...
	~Entity()
	{
		std::cout << "destroyed Entity!" << std::endl;
	}
	void Print() {

		std::cout << X << ", " << Y << std::endl;

	}
};

void Function() {
	Entity e;
	e.Print();
}

int main() {

	
	Function();
	
	
	return 0;
}