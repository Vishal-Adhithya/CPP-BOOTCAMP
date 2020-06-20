/*#include <iostream>

int main() {

       int interger_array[4] = {2, 1, 4, 9};
       std::cout << interger_array << '\n';                       // if we don't put any value in it will give ous the array stored memory loacation...

       int another_array[4];
       another_array[0] = 9;
       another_array[1] = 19;
       std::cout << another_array[0] << '\n';

  *another_array = 29; // this is another way of updating the value in c++...

       std::cout << another_array[0] << '\n';

        int *ap = another_array;
        ap++;
       *ap = 209;

      std::cout << another_array[1] << '\n';

        return 0;
        */

        //  THIS PROGRAM RUN FOR REFERENCE...

#include <iostream>

int main(){

  int intern_array[4] = {2, 1, 5, 6};
  int chart_array[6] = {2, 1, 6, 7, 8, 9};
  int comp_array[5] = {2, 1, 6, 7, 8};


  int gip_array[4];
  gip_array[0] = 3;
  gip_array[1] = 2;


    *gip_array = 200;

  std::cout << intern_array[2] << '\n';
    std::cout << gip_array[0] << '\n';
//  std::cout << gip_array[0] << '\n';
  int *ap = gip_array;
  ap++;


    *ap = 209;
    std::cout << gip_array[1] << '\n';














}
