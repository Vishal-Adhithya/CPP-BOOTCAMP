// Deque in STL


#include <iostream>
#include <algorithm>
#include <deque>


using namespace std;

int main() {

	// deque is also called as D queue....

	deque<int> mynums;


	// in deque the data is allowed to insert and remove the data  from back and front:

	// using deque the memory space is not going to be continued...

	// but it also can have the access of iterators...

	mynums.push_back(10);
	mynums.push_front(20);
	mynums.push_front(30);
	mynums.push_front(40);

	cout << mynums.size() << endl;

	cout << mynums.at(2) << endl;
	mynums.pop_back();


	for (auto n : mynums) {

		cout << n << " ";
	}


	return 0;
}