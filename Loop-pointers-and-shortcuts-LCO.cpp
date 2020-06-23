 #include <iostream>

 int main(){

   char my_string[] = "hitesh";// compiler is manually putting 0 for us;
   char my_name[] = {'h', 'i', 't', 'e', 's', 'h', 0};      //every string is terminated by 0...



    printf("MY name is: %s\n", my_string );
    std::cout << "my name is: " << my_string << std::endl;// use cout in order to use %s or %p or %l
    printf("my name is: %s\n", my_name);      //every string is terminated by 0...
    std::cout << "take a break" << std:: endl;

    for(int i = 0; my_name[i] !=0; i++){// !=0 means that the higher value doesn't become 0...
        std::cout << "character name is:" << my_name[i] << std:: endl;

    }


  for (char *cp = my_name; *cp != 0; cp++){

    std::cout << "character is: " << *cp << std:: endl;

  }

  for (char i:my_name){
      if(i == 0)break;
      std::cout << "character value is " << i << std:: endl;

  }

        return 0;
  }
