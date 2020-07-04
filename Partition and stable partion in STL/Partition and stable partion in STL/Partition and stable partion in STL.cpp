// Partition and stable partion in STL


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<int> myints = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for (int x : myints) {
		cout << x << " ";
	}
	cout << " \n";
	
	partition(myints.begin(), myints.end(), [](auto x) {return x % 2 == 0; });
	//stable_partion(myints.begin(), myints.end(), [](auto x) {return x % 2 == 0});


	for (int x : myints) {
		cout << x << " ";
	}
	cout << " \n";


	return 0;
}
