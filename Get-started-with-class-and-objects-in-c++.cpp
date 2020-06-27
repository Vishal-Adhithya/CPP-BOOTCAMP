#include <iostream>
#include <string>

class User{
  int secret = 22;// default status before secret is private nobody can access it.

public:
  std::string name  = "default";
  void classMessage(){std::cout << "Class is great," << name << std:: endl;}
};




int main(){
  sam.secret = 33;
  User sam;
  sam.name  = "Sam";
  sam.classMessage();
  User vishal;
  vishal.classMessage();
  vishal.name = "vishal";
  vishal.classMessage();

  return 0;
  }
