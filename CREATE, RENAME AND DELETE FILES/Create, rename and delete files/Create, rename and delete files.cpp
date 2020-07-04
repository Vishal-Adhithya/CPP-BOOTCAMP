// CREATE, RENAME AND DELETE FILES...


// ABSTRACTION...
// IT HIDES IMPLEMENTATION DETAILS WHILE JUST PRESENTTING THE FEATURES TO THE OUTSIDE WORLD ....
//		ADVANTAGES:
//				* IT REDUCE CODE COMPLEXCITY..
//				*IT HIDES THE DETAILS & EXPLOSING THE ESSENTIAL PATH..


// WHAT IS STATIC ?

//		STATIC IS A KEYWORD THAT THE OBJECT'S LIFETIME IS THE ENTIRE EXECUTION OF THE PROGRAM AND ITS VALUE IS INITAILIZED ONLY ONCE BEFORE THE PROGRAM STARTUP.
//

//WHAT IS CONST?

// A CONST IS A PROMISE THAT YOU WILL NOT TRY TO MODIFY THE VALUE ONCE SET.
//
//

#include <iostream>
#include <string>


using namespace std;

int main()
{
	static const char* originalfile = "originalfile.txt";
	static const char* editedfile = "editedFile.txt";
	// types of mode to open the files..
	// read mode 
	// open mode
	// append

//	rename(originalfile, editedfile);
	remove(editedfile);


	//FILE* fh = fopen(originalfile,"w" );
	//fclose(fh);

	return 0;

}


