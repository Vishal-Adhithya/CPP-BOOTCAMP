// STD->STANDARD TEMPLATE LIBARY...

#include<iostream>
#include<string>
#include <vector>

using namespace std;

struct Corners{
	float a, b, c, d;
};
// WHEN THERE IS NOT METHODS INSIDE THE CLASS STRUCT IS RECOMMENDED....

ostream& operator<<(ostream& stream, const Corners& corner) {
	stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
	return stream;
}


int main() {

	// vector is also know as array list....
	// vector are grown array list...
	// Usually we crete an array we want to mention what is the size of the array..
	// but in the case of vector the size can be grown to any level...

	vector<int> inty;
	
	inty.push_back(2);
	inty.push_back(3);
	inty.push_back(4);
	inty.push_back(5);

	
	for (auto i = inty.begin(); i < inty.end(); ++i){
		cout << *i <<endl;

	}
	
	vector<Corners> corners;
		
	corners.push_back({ 1, 2, 3, 4 });// struct take more than one value
	corners.push_back({ 5, 6, 7, 8 });

	for (int  i = 0; i < corners.size(); i++)
	{
		cout << corners[i] << endl;
	}


	return 0;

	
}














