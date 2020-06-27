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
