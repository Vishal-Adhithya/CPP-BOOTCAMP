#include <iostream>

struct user {
  const int id;
  const char *name;
  const char *email;
  int  purchase;
  const int card_id;
};


int main(){


  user shankar{001, "shankar", "shankar@toon.com", 2005, 0005};


  user *s = &shankar;

    s-> purchase = 2205;




    std::cout << shankar.purchase << std:: endl;




  return 0;
  }
