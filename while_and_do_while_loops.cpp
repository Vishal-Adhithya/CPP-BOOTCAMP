// WHILE AND DO WHILE LOOPS


// RULES...

     // WHERE THE CONDITION IS GETTING TESTED.
    //WHAT CONDITION IS GETTING TESTED?
   //CHANGE THE VALUE IS GETTING TESTED..
  //AUTOMATIC CHANGE OF VALUE, THAT IS GETTING TESTED.
//
//
// #include <iostream>
//
//
//   int main(){
//
//     int  my_numbers[]{ 4, 5, 6, 7, 8, 9, 0};
//     int i = 0;
//
//     while(i < 7){
//       // if(i == 3)break; //YOU CAN WRITE LIKE THIS SHORTLY...
//         if (i == 3) {
//         //  std::cout << "special thing " << std:: endl;
//       // break; // THIS WILL STOP THE LINE AT 3.
//            i++;
//            std::cout << "skip this one number" << std:: endl;
//
//            continue;
//
//         }
//
//       std::cout << "current number is: " << my_numbers[i] << std::endl;
//       i++;
//     }
//
//     std::cout << "outside of loop" << std:: endl;
//
//     return 0;
//     };


// The above program is while loops.

// this is do while loop program...

#include <iostream>


int main(){

    int j = 0;
      int lucky_array[]{

            1, 2, 3, 4, 5, 6, 7, 8, 9, 0
      };


    do{// do while loops are used in sensor. not much in software industries
      // the difference is the condition will be checked after the statement...
      //there will be no error in the program even the condition are not correct in do while loop...

      std::cout << "current number is:" << lucky_array[j] << std::endl;
      j++;

    } while(j < 10);
    std::cout << "outside of loop" << std:: endl;

  return 0;
  };
