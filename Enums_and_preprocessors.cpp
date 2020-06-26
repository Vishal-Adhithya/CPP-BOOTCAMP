// ENUMS AND PREPROCESSORS...

#include <iostream>

enum MsOffice {
    BOLD =5,
    ITALICS,
    UNDERLINED,
    COSSED
 };



int main(){
   int myAttribute = ITALICS;// it keep on incrementing the value...
   int lostAttribute = COSSED;// it automatically increment there value when you change the enums value...


    std::cout << myAttribute << std:: endl;
    std::cout << lostAttribute << std:: endl;


// WHAT IS THE USE OF ENUMS ?

/* An enumeration is a user=defined data type that consists of integral constants. To define an enumeration, keyword enum is used
Enums are lists fo enumeration, keyword enum is used.
Enums are lists of constants. When you need a predefined list of values which do represent some kind of numeric or textual data.
you should usse an enum.
you should always use enums when a variable can only take one out of a small set of possible values    */

  return 0;
  }
