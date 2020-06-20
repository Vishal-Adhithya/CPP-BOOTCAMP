// #include <iostream>

// int main(){

// 	int rating = 4;


// 	switch(rating){
// 		case 1:
// 			{std::cout << "rating is 1 star" << std:: endl;
// 				break;
// 			}

// 		case 2:
// 			{std::cout << "rating is 2 star" << std:: endl;
// 				break;
// 			}

// 		case 3:
// 			{std::cout << "rating is 3 star" << std:: endl;
// 				break;
// 			}

// 	    case 4:
// 	   		{std::cout << "rating is 4 star" << std:: endl;
// 	   			break;
// 	   		}

// 	   	 case 5:
// 	   	  	{std::cout << "rating is 5 star" << std:: endl;
// 	   	  		break;
// 	   	  	}
// 	   	  	default:
// 	   	  	{std::cout << "please rate your system between 1 to 5 stars " << std:: endl;
// 	   	  	break;
// 	   	  }
// 	};



// 	return 0;

// }


//  THE ABOVE PROGRAM IS DONE  WTIHOUT CIN  THIS PROGRAM WILL HAVE USER INPUT...


#include <iostream>


int main(){

	int rate;
std::cout << "Give your rating " << std:: endl;
std::cin>>rate;
std::cout<< std:: endl;

	switch (rate) {
	  case 1:
		    printf("thanks for your rating you have rated 1\n");
	    break;
	    case 2:
		    printf("thanks for your rating you have rated  2\n");
	    	break;
	    case 3:
	    	printf("thanks for your rating you have rated 3\n");
			break;
		case 4:
		printf("thanks for your rating you have rated 4\n");
			break;
		case 5:
		printf("thanks for your rating you have rated 5\n");
	  default:
		printf("you have enter a wrong rate rate between 1 to 5\n");
			break;
	};
	return 0;
}
