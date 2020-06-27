#include <iostream>
int factorial(int n);


// definition is in the top of the program to run the defintion in the end of the program
int main(){

 // recursion is a function that it call itself again and again with an exit statergy...

// ways to find the factorial way:
                          // Factorail : 5*4*3*2*1
                          // Factorial : 1*2*3*4*5
              // the statergy is the keepon increasing the number or decreasing the number...


int n;
std::cout << "Enter a value" << std:: endl;
std::cin >> n;
int jack = factorial(n);
  std::cout << "your result for Factorial is:" << jack << std:: endl;


  return 0;
  }

  int factorial(int n){

    if (n > 1) {
      return   n * factorial(n -1);

    }else{
      return 1;
    }


  }
