// #include <iostream>
//
// float division(float num, float den ){
//
//       return(num / den);
//
// }
//
// int main(){
//
//  float numerator;
//  float denominator;
//  float result;
//
//
//   std::cout << "Enter numerator" << std:: endl;
// std:: cin >> numerator;
//   std::cout << std:: endl;
//   std::cout << "Enter denominator" << std:: endl;
// std:: cin >> denominator;
//   std::cout<< std:: endl;
//
//       result = division(numerator, denominator);
//
//       std::cout << "the quotient for you Q is:" << result << std:: endl;
//
//
//
//
//   return 0;
//   }





// Program to show division without using
// Exception Handling

#include <iostream>
using namespace std;

// Defining function Division
float Division(float num, float den)
{
    // return the result of division
    return (num / den);

} // end Division

int main()
{
    // storing 12.5 in numerator
    // and 0 in denominator
    float numerator;
    cout << "enter numerator";
    cin >> numerator;
    cout << endl;

    float denominator;
    cout << "enter denominator";
    cin >> denominator;
    cout << endl;
    float result;

    // calls Division function
    result = Division(numerator, denominator);

    // display the value stored in result
    cout << "The quotient of 12.5/0 is "
         << result << endl;

} // end main
