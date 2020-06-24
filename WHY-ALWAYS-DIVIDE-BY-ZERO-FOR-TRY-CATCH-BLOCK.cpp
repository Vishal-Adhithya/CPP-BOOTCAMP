// IN this turtorial we are going know what is try catch block...


#include <iostream>

  int main(){

    char call_api = 'v';

    try{
      std::cout << "trying to use API value" << std:: endl;
      std::cout << "did some testing with api value" << std:: endl;
      throw call_api;
      std::cout << "no code is gonna excute after return and throw statment" << std:: endl;

    }catch(int x){
      std::cout << "integer expection handled" << std:: endl;
    }catch(float f){
      std::cout << "float handled" << std:: endl;

    }catch(char c){
      std::cout << "char expection handled" << std:: endl;

    }catch(...){
      std::cout << "something went wrong" << std:: endl;

    }// if you don't know the what type of data type is comming up we can use these three dots...


      std::cout << "keep on moving with the rest off the code" << std:: endl;


    return 0;
    }
