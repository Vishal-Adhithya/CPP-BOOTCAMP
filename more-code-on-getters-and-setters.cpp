#include <iostream>
#include <string>

class User{
  int _secret = 22;

public:
    std::string name = "default";
    void classMessage(){std::cout << "thank you so much " << name << std:: endl;};
;
    void setSecret (const int & newsecret){_secret = newsecret;};
    int getSecret() {return _secret;}
};



int main(){

     User vishal;
     vishal.name = "vishal";
     vishal.setSecret(333);

     std::cout << vishal.getSecret() << std:: endl;


     vishal.classMessage();




  return 0;
  }
