#include <iostream>


int main(){

 int life = 3;
 int point = 4;

 int score = 2;

 score += point;// short hand method...

  std::cout << score << std:: endl;
  if (life == 0) { // != not equals to zero...
    puts("into the if block");

  }else{
    int i = 0;
    while (life == 3){
      std::cout << "life is not equals to zero" << std:: endl;
        life++;

      };
  }


  return 0;
  }
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Basics-of-operators-on-c++.cpp: In function 'int main()':
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Basics-of-operators-on-c++.cpp:19:41: error: expected ';' before '}' token
  // 19 | puts("life is not equals to zero")
  // | ^
  // | ;
  // 20 | };
  // | ~
