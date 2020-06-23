 #include <iostream>
 int main(){

  int locked_down[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};


    std::string lock = {"rakesh"};


    for(int i = 0; i <10; i++){
std::cout << "STUDENTS GOT RANK:" << std:: endl;

    std::cout << "NAME " << locked_down[i]  << std::endl;

    }


      for(int i:locked_down){

        std::cout << i << std:: endl;

      }



   return 0;
   }
