#include <iostream>
#include <string>

class User{
    int id = 23;

public:
    std::string name = "default";
    void classMessage() {std::cout << "thanks you very much " << name << std:: endl;
  }



};


int main(){

    User sam;
    sam.name = "sam";

      sam.classMessage();

  return 0;
  }
