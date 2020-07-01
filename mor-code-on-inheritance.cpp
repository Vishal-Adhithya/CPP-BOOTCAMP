#include <iostream>
#include <string>

class Man{
  std::string _name;
  std::string _superheroName;
  int _age;
  std::string _powersA;
  Man(){}
protected:
      Man(const std::string & name, const std::string & superheroName, const int & age, const std::string & powersA) : _name(name), _superheroName(superheroName), _age(age), _powersA(powersA){}

      void powers(){puts("I have powers");}
public:
    void sayName()const;
};

 void Man::sayName()const{
   std::cout << "My name is: " << _name  << "And my age is: "<< _age  << std::endl;
 }

// INHERTANCE

class Deadpool : public Man {
      bool nodead;
public: Deadpool(std::string name) : Man(name, superheroName, age, powersA){}



};


int main(){


  Deadpool mike("johnson");
  mike.sayName();

// i have already done this progeam in another file ... this just a reference how to do it without namespace std;



  return 0;
  }
