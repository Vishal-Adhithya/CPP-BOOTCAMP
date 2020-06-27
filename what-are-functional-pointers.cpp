// WHAT ARE FUNCTIONAL POINTERS......

#include <iostream>

int getTwo(){

  return 2;
}

void intersting() {

  puts("I am interesting");

};

int main(){
// a pointer is need to be the same data type which is holding the funcion return value.
// IF YOU DON'T WANT TO RUN THE VALUE REMOVE THESE PARENTHESES...
// if you are adding or doing anything with pointer use PARENTHESES so it becomes one unit...
// functional pointers want put a pair of PARENTHESES to it because it is funtional pointers...

  void (*pointsToInteresting)() = intersting;


    int whatIgot = getTwo();

    std::cout << whatIgot << std:: endl;
    pointsToInteresting();
    (*pointsToInteresting)();
  return 0;
  }
