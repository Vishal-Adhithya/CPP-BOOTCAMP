//LOGICAL AND OR AND NOT ...


#include <iostream>


  int main(){

    // boolean can store only two types of value...

    bool isfbUser = false;
    bool isGoogleUser = true;
    bool  isAdmin = true;
// and logical
      if ((isGoogleUser || isfbUser) && isAdmin) {// if any one of the value is wrong it will give the else output be && sign must have both of them true....
        puts("welcome admin");
      }else{
        puts("you don't have the access");
      }

// OR logical

    if (isfbUser || isGoogleUser) {// any one of the condition will should be true.
        puts("welcome user");
    }


    return 0;
    }
