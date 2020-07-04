// SETS AND MULTISETS IN STL

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
class User {
public: 
	string name;
	int score;
	bool operator < (const User& u)const { return score < u.score; };
	bool operator > (const User& u)const  { return score < u.score; };


};


// if we are using set for class we have to override the class....

int main()
{
	// SET DO NOT ALLOW TO HAVE MULTIPLE SAME VALUE WHILE MULTI SET ALLOWS TO HAVE MULTIPLE VALUES

	multiset<int> myset = { 12, 13, 14, 15, 14, 12 };// it ignore the same value

	myset.insert(2);
	myset.insert(3);
	myset.insert(4);
	myset.insert(2);
	myset.insert(6);

	for (auto i = myset.begin(); i != myset.end(); ++i) {
		cout << " " << *i << endl;

	}

	for (const auto& v : myset) {

		cout << v << " ";

		
	}
	cout << endl;
	// in clas we have to mention the greater and lesser than sign

	set<User, greater<User>> myUserSet = { {"sam", 200}, {"tim", 22}, {"sam", 200 } };
	

	for (const auto& v : myUserSet) {

		cout << v.name << " \n";

		
	}
	cout << endl;




}