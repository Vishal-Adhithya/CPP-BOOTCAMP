// struct

// structures are every where when there is no classes.


#include <iostream>

  struct User{
        const int unique_Id;
        const char *name;// POINTER IS CONSTANT NOT THE VALUE INSIDE IT...
        const char *email;
        int courses_count;

};

int main(){

  User vishal = {05, "vishal", "vishal@gmail.com", 1};
  User adhithya = {2005, "adhithya", "adhithya@gmail.com" , 3};

  std::cout << vishal.email << std:: endl;
  std::cout << adhithya.email << std:: endl;

  adhithya.courses_count = 4;
  adhithya.email = "va@gmail.com";

  std::cout <<"adhithya has bought "<< adhithya.courses_count << " courses" << std:: endl;

  User * a = &adhithya;

  // if you want to use it use this short cut for it.
  a-> courses_count = 12;
  std::cout << adhithya.courses_count << std:: endl;


  return 0;
  }
