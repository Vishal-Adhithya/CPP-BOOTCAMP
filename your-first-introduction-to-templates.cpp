#include <iostream>
#include "adder.h"


void lifeUp(int *life) {
  ++(*life);
};
// templates can be used for as a data type in c++ when we are using mutiple data type on a same thing we can use templates....
template <typename T>
T goldd(T a, T b){

  return 0;
}

int main(){

 int life = 3;
 lifeUp(&life);
 std::cout << life << std:: endl;

  int v1 = 4;
  int v2 = 4;
  float v3 = 5.6;
  float v4 = 7.5;

  std::cout << addme(v3, v4) << std:: endl;
  std::cout << goldd(v1, v2) << std:: endl;


  return 0;
  }
