#include <iostream>
#include <forward_list>

using namespace std;

int main(){

  forward_list<int> flist1;
  forward_list<int> flist2;
  flist1.assign({1, 2, 3});
  flist2.assign({5, 10});

  cout << "the elements of first foward list: "  << endl;

  for(int a: flist1){
    cout << a << endl;
  }


  flist1.push(10)
  cout << "the elements of first foward list: " << endl;




  return 0;

  }
//
