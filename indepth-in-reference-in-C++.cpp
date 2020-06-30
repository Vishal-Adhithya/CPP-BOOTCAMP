#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value) {
  value++;
};

 int main(){

   int a = 5;
   int b = 8;

   int* ref = &a;
   *ref = 2;
   ref = &b;
    *ref = 1;

    LOG(a);
    LOG(b);
   Increment(a);
// once you declare a reference you can't change what it will reference....



   LOG(a);


  return 0;
  }
