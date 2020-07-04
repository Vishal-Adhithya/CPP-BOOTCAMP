// MAPS AND Assignment


#include <iostream>
#include<algorithm>
#include <map>
#include <string>
#include <vector>
using namespace std;


class ls {

public: 
	void operator()(int a) {
		cout << a << endl;
	}
};

int main() {

	vector<int> myvecotr;
	myvecotr.push_back(10);
	myvecotr.push_back(6);
	myvecotr.front() += myvecotr.back();

	cout << myvecotr.front() << '\n';
	return 0;

	return 0;
}