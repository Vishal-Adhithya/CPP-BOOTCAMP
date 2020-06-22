#include <iostream>


int main(){

  int my_nums[]{2, 3, 4, 5, 6};

// parts of for loop...
// ***initializer
// ***comparator
// ***increment or decrement the value
// In for loop the variable lifespan is up to the loop we can use the variable anywhere after the for loop.

for(int i = 0; i < 5; i++){
  // std::cout << my_nums[i] << std:: endl;
  std::cout << i << std:: endl;

  }
std::cout << "GET A BREAK" << std:: endl;

  // FOR RANGE LOOPS.............
  //in range loops we want to have colon in between noting changes from the for loops just the condition...


    for(int i:my_nums){
       std::cout << i << std:: endl;

    }



//



  return 0;
  };
