#include <iostream>
#include <string>


using namespace std;

class User{

    int _secret = 20;

public:
        void setSecret(const int & newsecret) { _secret = newsecret;}
          int getSecret()const;

};

int User::getSecret()const{
  return _secret;}



int main(){

 User sam;

 sam.getSecret();

 std::cout << sam.getSecret() << std:: endl;


  return 0;
  }



  //
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\FEATURE\CPP-BOOTCAMP\useless-getters-and-setters.cpp:17:5: error: no declaration matches 'int User::getSecret() const'
  // 17 | int User::getSecret()const{
  // | ^~
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\FEATURE\CPP-BOOTCAMP\useless-getters-and-setters.cpp:13:16: note: candidate is: 'void User::getSecret() const'
  // 13 | void getSecret()const;
  // | ^~~
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\FEATURE\CPP-BOOTCAMP\useless-getters-and-setters.cpp:7:7: note: 'class User' defined here
  // 7 | class User{
  // | ^~
