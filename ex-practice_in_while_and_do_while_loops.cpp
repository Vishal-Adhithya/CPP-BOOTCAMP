// #include <iostream>
//
//
// int main(){
//
//     int j = 0;
//
//   int lost_num[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//
//
//    while(j < 10){
//      std::cout << "current number is:" << lost_num[j] << std::endl;
//        j++;
//
// }
//   return 0;
// }



#include <iostream>
int main(){
int i = 0;


int lucky_man[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
while(i < 10){
      std::cout << "this is the number that is in this array:" << lucky_man[i] << std::endl;
      if (i == 3)break;
      std::cout << "special thing" << std:: endl;
        i++;
}
  std::cout << "outside of the do loop" << std:: endl;


}
