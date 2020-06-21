/*#include <iostream>
#include <stdio.h>

int main(){
	int rating = 8;
		if (rating == 5)
		{
			std::cout << "5 star rated" << std:: endl;	

			
		}else if (rating == 4)
		{   std::cout << "4 star rated" << std:: endl;	

		}	
			else{
				std::cout << "THIS IS NOT RATED 5 STAR OR FOUR STAR" << std:: endl;
				
			}
		
			


		if(11){
	//IF YOU PUT NULL OR 0 OR FALSE IT WILL NOT BE DISPLAYED IN THE BUILD CONSOLE...
				puts("go for it");// IF YOU PUT 1 OR ANY NUMBER OR TRUE WILL GONNA EXCUTE IN THE BUILD CONSOLE...
			}
	

					// TERNARY 

			printf("Your rating feedback %s\n", rating > 4 ? "aweasome" : "is truly bad");
			

	return 0;
}
*/

// remove these comment to access this...


#include <iostream>
#include <stdio.h>


int main(){

	int rate;
	int issue;
	
	std::cout << "Welcome to our rating system" << std:: endl;

	std::cout << "This is our movie satan slaves give your rating out of 5 star" << std:: endl;
    std::cout << "Give your rating: ";
    std:: cin >> rate;
    if(rate == 5){

    	std::cout << "Thanks for your aweasome 5 star rating" << std:: endl;

    }else if (rate == 4){
    	std::cout << "Thanks for your rating but tell ous in the comment what's missing" << std:: endl;
    
    }else if (rate == 3 )
    {	std::cout << "We expect your problems facing so that we cna improve!!" << std:: endl;

    }else if (rate == 2)
    {
    	std::cout << "Ooops! Sorry for your inconvinience" << std:: endl;
    }else if (rate == 1)
    {
    	std::cout << "Can we know your issue??" << std:: endl;
    	std::cin>> issue;
    	std::cout << "Thanks for your report we will let you know when we clear this " << std:: endl;
    }else {
    	std::cout << "This rating is out of 5 please enter a valid rating" << std:: endl;
    }
    
       // PRACTICING TERNARY 

   std:: cout << ((rate > 1) ? "true block" : "false block");
   std::cout<<std:: endl;
   std::cout << "this is not gonna work" << std:: endl;





	return 0;
}









// ternary ends the line with using namespace std;


// #include <iostream>


// using namespace std;


// int main(){
// 	int ratee;
// 	cout << ((ratee > 2) ? "true block" : "false block") << endl;


// 	return 0;
// }

// git test


