#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

 vector<int> inty = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    partition(inty.begin(), inty.end(),[](auto x){ return x%2==0; });

    for(int x :inty){
      cout << x << " ";
    }

  return 0;
  }
  //
  //
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\partition_in_c++.cpp: In function 'int main()':
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\partition_in_c++.cpp:12:5: error: 'partion' was not declared in this scope
  // 12 | partion(inty.begin(), inty.end(),{ return x%2==0; })
  // | ^~~
