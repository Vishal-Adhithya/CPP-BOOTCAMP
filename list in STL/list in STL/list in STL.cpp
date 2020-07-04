// list in STL


#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
/*
int main() {

	// types of linked list:
			// singly linked list
			// doubly liked list

	list<int> mylist;

	for (int i = 3; i <= 10; ++i) {						// LEARNCODEONLINE.IN				
		mylist.push_back(i); 

	}
	cout << mylist.front() << endl;
	cout << mylist.back() << endl;

	mylist.pop_back();
	
	mylist.reverse();// this is a special feature of list that can reverse the hole list...

	for (auto i : mylist) {
		cout << i << " ";
	}

	cout << endl;

	mylist.sort();
	for (auto i : mylist) {
		cout << i << " ";
	}
	cout << endl;



	return 0;
}*/

// from documentation..

int main() {

	vector<int> inty;

	for (int i = 0; i <= 10; ++i) {

		inty.push_back(i);
	}
	for (auto i : inty) {
		cout << i << endl;
	}



	return 0;
}