#include<iostream>
#include<string>

using namespace std;

class MyFloat {
	float ft;

public: 
	MyFloat() {
		ft = 0.1;
	}
	void getValue() {
		cout << ft << endl;
	}

	void operator ()(float v) {
		ft += v;
	}


};

int main() {

	MyFloat floaty;
	floaty.getValue();

	floaty(1.0);
	floaty.getValue();

	floaty(2.0);
	floaty.getValue();


	return 0;
}