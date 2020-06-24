// SNEEK PEEK ABOUT FUNCTIONS....

#include <iostream>

void sayhello(){
      std::puts("hello there!");

}
// void saytwo() {
// //   std::puts("2");
// };

  int saytwo(){

      return 2;
  }// voiid and int are not compatible...

  void saythree() {
    puts("3");
  };

int main(){

  sayhello();
  printf("%d\n", saytwo());
  saythree();

  return 0;
  }
