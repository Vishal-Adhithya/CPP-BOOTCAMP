// A CHALLENGE TO STRONGLY TYPES LANGUAGE...

#include <iostream>
#include <string>


std::string api_call(){

  return "got some data from web\n";
}

int another_api(){
  return 5;
}

int main(){

  //std::string
   auto response = api_call();  // in this case we don't know what kind of data type is coming up we can use a data type auto...
          // the job of auto is not itself a data type is available here the job of auto is to automatically define the data type
auto rep = another_api();
  std::cout << "API CALL VALUE IS:" <<  response << std:: endl;
 std::cout << "API CALL VALUE IS:" <<  rep << std:: endl;
   if (typeid(response) == typeid(std::string)) {
    puts("Type of both ID matches\n");
  }else {
    puts("this type doesn't match\n");
  }

  if(typeid(rep) == typeid(int)){
    puts("both data type is matching\n");
  }

  return 0;
  }

  //
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\A-challenge-to-strongly-types-language.cpp: In function 'int main()':
  // E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\A-challenge-to-strongly-types-language.cpp:19:35: error: 'string' was not declared in this scope; did you mean 'std::string'?
  // 19 | if (typeid(response) == typeid(string)) {
  // | ^~
  // | std::string
  // In file included from c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\iosfwd:39,
  // from c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\ios:38,
  // from c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\ostream:38,
  // from c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\iostream:39,
  // from E:\My Code and every thing\My old c++ courses programs\CPP BOOTCAMP\CPP-BOOTCAMP\A-challenge-to-strongly-types-language.cpp:3:
  // c:\mingw\lib\gcc\mingw32\9.2.0\include\c++\bits\stringfwd.h:79:33: note: 'std::string' declared here
  // 79 | typedef basic_string string;
  // | ^~
