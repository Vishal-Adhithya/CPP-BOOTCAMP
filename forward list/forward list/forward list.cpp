#include <iostream>
#include <forward_list>
#include <algorithm>

using namespace std;

int main()
{

	forward_list<int> flist1 = { 1, 2, 4, 6, 8 };

	forward_list<int> flist2 = { 10, 20, 30 };

	flist1.push_front(3);
	

	flist2.splice_after(flist2.begin(), flist1);

	flist1.remove(3);

	for (int &i : flist2) {
		
		cout << i << endl;

	}


}