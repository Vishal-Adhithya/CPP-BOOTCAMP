// linking is a process when we go though to a actuall c++ file to a actual excutable binary..

// the primary focus of linking to find where each symbol and fuciton is and link them together

// each file compile separately object file as a translation relationship to each other.

#include <iostream>
#include "log.h"






static int multiply(int a, int b) {

	Log("multiply");//	I NEVER CALL THE FUCTION  IT WILL NEVER GET ERROR.
	return a * b;
}

int main() {
	std::cout << multiply(5, 8) << std::endl;
	std::cin.get();
}