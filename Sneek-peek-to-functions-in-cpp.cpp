#include <iostream>
#include <string>

class Rectangle {
	double _length;
	double _breadth;

public:
	Rectangle(double l = 2.0, double b = 2.0) {
		_length = l;
		_breadth = b;


}

	double Area() {
		return _length * _breadth;
	}

	int compare(Rectangle rectangle) {
		return this->Area() > rectangle.Area();
	}

};



int main() {

	Rectangle h1(3.0, 3.0);
	Rectangle h2(4.0, 4.0);

 std::cout << h1.compare(h2) << std:: endl;// 0 is false
  std::cout << h2.compare(h1) << std:: endl;// 1 is false

	if (h1.compare(h2))
	{
		std::cout << "H2  is smaller";
	}
	else{
		std::cout << "h2 is bigger";
	}
	return 0;
}
