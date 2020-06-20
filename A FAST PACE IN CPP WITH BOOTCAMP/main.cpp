/*#include <iostream>

using namespace std;

int main(){
    string Name;
 cout << "Enter your name:" << endl;
 getline(cin, Name);

cout << Name << " Enter your age: " << endl;
int age;
    cin >> age;

    if(age >= 50){

        printf("Your not aged for this session");
    }else{
        printf("Your are qualified for this session");
    }


return 0;

}
*/

// THE ABOVE PROGRAM IS DONE FOR FUN...


                             // POINTERS IN C++...

// In c++ using pointer cause a lot of times bugs and error...
// a simple code like boiler plate code doesn't do anything...
#include <iostream>

using namespace std;

int main() {


 const int life = 4;
 //life= 2;       // WE CAN'T ASSIGN A NEW VALUE TO THE VARIABLE BECAUSE WE GAVE IT A  QAUALIFIER CONSTANT ...


    int card;
    card = 40;
    int my_card = card;

    int *myp;
    myp = &card;

   my_card = *myp; // THIS IS CALLED POINTER DEREFENCING...

    printf("print my card %d\n", my_card);
    printf("value of my myp is:%p\n", myp);
    printf("value of card is: %d\n", my_card); // DUE TO WE ARE DEREFENCE WE GET THE POINTER VALUE. SO WE HAVE TO PUT %d IN THE IDENTIFIER...
    // In order to declare a pointer we need to use ASTERISK...
    // Using & symbol we can use it to point a variable memory...

    return 0;

}


