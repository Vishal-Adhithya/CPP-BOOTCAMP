#include <iostream>

  int main(){

    char my_luck[] = {'v', 'i', 's', 'h', 'a', 'l', 0};
// FOR LOOP WITHOUT POINTERS....
    for(int i = 0; my_luck[i] !=0; i++){// !=0 means that the higher value doesn't become 0...
        std::cout << "Name letters are: " << my_luck[i] << std:: endl;

    }
      std::cout << "ANOTHER LOOP" << std:: endl;
// FOR LOOP WITH POINTERS....

    for(char *cp = my_luck; *cp !=0; cp++){

      std::cout << "Name letters are: " << *cp << std:: endl;

    }
// FOR RANGE LOOPS ....
      std::cout << "ANOTHER LOOP" << std:: endl;

   for(char i: my_luck){
     if(i == 0)break;
      std::cout << "Name letters:" << i << std:: endl;
}
    return 0;
    }
