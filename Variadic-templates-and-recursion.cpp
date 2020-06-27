// variadic templates and recursion


// variadic is mathamatical thing that store infinty amount of arugements....
//  ... this is variadics.
#include <iostream>

template <typename T>

void func(T t){
    std::cout << t << std:: endl;

}

template<typename T, typename... Args>
void func(T t, Args... args) {

    std::cout << t << std:: endl;
    func(args...);

   /* code */
};

int main(){

  std::string myName  = "vishal";

    func(myName);
    func(1, 2, 3.4, 4.5 , myName);


  return 0;
  }

  //
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp:16:1: error: expected '>' before 'void'
  // 16 | void func(T t, Args... args) {
  // | ^~
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp:16:30: error: expected unqualified-id before '{' token
  // 16 | void func(T t, Args... args) {
  // | ^
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp: In function 'int main()':
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp:29:33: error: no matching function for call to 'func(int, int, double, double, std::string&)'
  // 29 | func(1, 2, 3.4, 4.5 , myName);
  // | ^
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp:10:6: note: candidate: 'template void func(T)'
  // 10 | void func(T t){
  // | ^~
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp:10:6: note: template argument deduction/substitution failed:
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\Variadic-templates-and-recursion.cpp:29:33: note: candidate expects 1 argument, 5 provided
  // 29 | func(1, 2, 3.4, 4.5 , myName);
  // | ^
