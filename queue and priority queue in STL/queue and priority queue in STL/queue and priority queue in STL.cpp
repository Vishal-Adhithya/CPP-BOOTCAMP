// queue and priority queue in STL


#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{

	// queue is most like a MC DONALDS queue who is gonna first they will get first
	queue <int> myq;

	myq.push(10);
	myq.push(12);
	myq.push(14);
	myq.push(16);


	cout << myq.front() << endl;
	cout << myq.back() << endl;
	myq.pop();
	cout << myq.back() << endl;
	cout << myq.front() << endl;


	// the only bad thing is about queue is it will not give an iterator with it...

	while (!myq.empty())
	{
		cout << " " << myq.front();
		myq.pop();

	}
	cout << "\n";
	cout << "outside \n";


	priority_queue<int> mypq;
	mypq.push(10);
	mypq.push(40);
	mypq.push(50);
	mypq.push(5);

	while (!mypq.empty())
	{
		cout << " " << mypq.top();// the rest off the stuff are like tha same as queue only the top is change..
		mypq.pop();

	}
	cout << "\n";



	return 0;

}