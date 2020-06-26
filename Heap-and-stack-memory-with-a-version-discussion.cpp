
#include <iostream>

struct User {
  const int id;
  int age;

  User(): id(001), age(22){}
};


int main(){

// in this tutorial going ot learn about two types of memory
// STACK MEMORY
// HEAP MEMORY ..

 // BOTH STACK MEMORY AND HEAP MEMORY IS IN RAM. NOT IN CACHE ....
 // BOTH ARE SAME BUT THE ALCATION PART IS BIT TOO DIFFERENT IN THE BOTH...
 // THE STARTING INITIALIZATION OF THE MEMORY IS DIFFERENT...

// STACK                            |                       HEAP
// THIS IS THE DEFAULT MEMORY THAT  | HEAP MEMORY IS ALSO PREDEFINED BUT IT CAN GROW
// THE PROGRAM USES.                | BASED ON YOUR DEMAND.
//                                  |
//  STACK MEMORY HAS PREDEFINED SIZE|
//  YOU CAN'T HAVE MORE THAN THAT.  |
//                                  |
//                                  |
//                                  |
//                                  |

//________________________________________________________________________________________


// STACK

int score = 100;



  User mike;









// HEAP

  int *headp_score = new int;
  *headp_score = 200;

  User* nike = new User();


  delete headp_score;
  delete nike;











  return 0;
  }
