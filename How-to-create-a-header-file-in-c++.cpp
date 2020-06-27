#include <iostream>
#include <string>
#include "adder.h"



void lifeUp(int *life) {
  ++(*life);
};



int main(){

  int life = 3;
  lifeUp(&life);
  std::cout << life << std:: endl;


  int v1 = 4;
  int v2 = 5;
  float v3 = 5.6;
  float v4 = 7.5;

  std::cout << addme(v3, v4) << std:: endl;




  return 0;
  }
