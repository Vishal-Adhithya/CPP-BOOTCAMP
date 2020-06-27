// METHOD SEPARATION AND CONST QUALIFIED METHODS

#include <iostream>
#include <string>


class User{

  int secret = 22;

public:
  std::string name = "default";// THESE ARE DATA MEMBERS...
  void classMessage();
  int getSecret() const {return _secret}
};
  void User::classMessage(){   // inorder to note this METHOD is part of the class use the class variable name and scope operator ::   ......
     std::cout << "class is great " << name << std:: endl;
};


int main(){

 User sam;
 sam.name = "Sam";
 sam.classMessage();

 User vishal;
 vishal.classMessage();
 vishal.name = "vishal";
 vishal.classMessage();

 // constant method cannot access the non constant method...

  return 0;
  }
