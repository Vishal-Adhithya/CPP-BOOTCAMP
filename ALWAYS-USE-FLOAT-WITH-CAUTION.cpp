//float data type are in three different type of flavour...

// Types are float data Types are:
                                //float...
                                //double...
                                //long double...


#include <iostream>


int main(){

 printf("Float size is %ld bits \n",sizeof(double) * 8);// i will get the output as 64 bits
 std::cout << "Float size is " << sizeof(long double) * 8 << " bits" << std:: endl; // i will get the output as 96 bits...

  float my_p_value = 20.2 + 20.2;

    if(my_p_value == 40.400002){

        std::cout << "you got it right" << std:: endl;

    }else{

       std::cout << "you got it wrong" << std:: endl;

    }



  printf("My presize value is: %f in float\n",my_p_value);

  return 0;
  }
