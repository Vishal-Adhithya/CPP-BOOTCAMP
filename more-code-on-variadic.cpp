#include <iostream>
#include <string>


template <typename T>
void func(T t) {
   std::cout << "ONE FUNC " << t << std:: endl;

};

  template<typename T, typename... Args>
  void func(T t, Args... args) {
    std::cout << "TWO FUNC "<< t << std:: endl;
    func(args...);
  };


int main(){

 std::string MYNAME = "vishal";

    func(MYNAME);
    func(1, 2, 3, 5, 6, 5.2, MYNAME);


  return 0;
  }
