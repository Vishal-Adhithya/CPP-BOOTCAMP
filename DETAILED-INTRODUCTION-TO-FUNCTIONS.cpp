// DETAILED INTRODUCTION TO FUCTIONS...
// topic that are in this section
//Deviation
// some other topic i didn't understand the name.


#include <iostream>

 // call by value>>>>>>>>>>>>
 // does not increment the value.

//



 // call by reference can happen in two ways...
 void lifeUp(int &life) {
          ++life;// if you change using the reference it will change ever where..
 };

 // void lifeUp(int *life) {
 //          ++(*life);// this method is using pointers in the arguments and reference in the main function
 // };


 //  functions are building block for c++
 // main is a reserve keyword


int addme(int a, int b){

  return a + b;
}

float addme(float a, float b){
  return a + b;
}

int main(){


  int life = 3;
  lifeUp(life);
  std::cout << life << std:: endl;

    int v1 = 4;
    int v2 = 5;
    float v3 = 5.6;
    float v4 = 7.5;

    std::cout << addme(v3, v4)<< std:: endl;


  return 0;
  }
