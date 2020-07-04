// SEARCH algorithms in STL


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int numbers[6] = {3, 2, 5, 4, 7, 9};

	cout << "UNSORTED VALUES: \n";
	for (int n : numbers) {
		cout << n << " \n";
	}

	// SORTING TAKES PLACE 
	
	sort(numbers, numbers + 6);
	//sort_heap(numbers, numbers + 6);
	if (binary_search(numbers, numbers + 6, 13))
	{
		cout << "NUMBER FOUND" << endl;
	}
	else {
		cout << "NUMBER NOT FOUND " << endl;
	}



	cout << "SORTED VALUES: \n";
	for (int n : numbers) {
		cout << n << " \n";
	}

	

		// binary search requires a forward iterator an forward iterator and a const value

	return 0;
}