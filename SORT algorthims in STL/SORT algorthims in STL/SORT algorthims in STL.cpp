// SORT ALGORITHMS IN STL;

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {



	int arr[] = { 10, 20, 30, 40, 50, 60 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	cout << arrSize << endl; // how to find the size of the array...

	int numbers[6] = { 3, 2, 6, 4, 7, 9 };

	// call the array as an iterator in c++

	cout << "Unsorted values: " << endl;
	for (int n : numbers) {
		cout << n << "  \n";

	}
	// sort takes the start of the iterators and the end of the iterator... 
	sort(numbers, numbers+6);

	cout << "SORTED values: " << endl;
	for (int n : numbers) {
		cout << n << " \n";

	}





	return 0;
}

/*// SORT ALGORITHMS IN STL;

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {


	int arrayON[6] = { 3, 2, 4, 5 ,7, 9 };

	cout << "Unsorted values: \n";
	for (int i : arrayON) {
		cout << i << " \n";
	}

	sort(arrayON, arrayON + 6);

	cout << "sorted values: \n";
	for (int i : arrayON) {
		cout << i << " \n";
	}



	return 0;


}

*/