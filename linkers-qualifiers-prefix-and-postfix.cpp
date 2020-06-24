#include <iostream>

// 2 major types of qualifiers in c++ are:
                                  //  * MODIFICATION qualifiers...
                                                  //  Modification variable allows us to modify or not modify
                                                 //the value that we put inside in any variable or any data types.

                                //  *  LIFE DURATION qualifiers...
                                              // life DURATION variable allows us to how much time
                                             //  we need to variable or value avaiable to you.

// MODIFICATION qualifiers  |                life DURATION qualifiers
//                          |
//  const                   |                static
//  volatile                |                register
//  mutable                 |                extern
//                                            auto


// static is used to track an entire lifespan of variable...
  int lifeup(){
      static int life  = 3;
      return ++life; // ++life first increment the value and then give the result so we want them what kind of thing you need.
    }

  int main(){

      int life = 3;
      std::cout << "your starting game life is: " << life << std:: endl;

      life = lifeup();
      printf("your updated game life is: %d\n", life);

      life = lifeup();
      printf("your updated game life is: %d\n", life);




      return 0;
      }
