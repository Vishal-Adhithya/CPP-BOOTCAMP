// Reading and writing into files and MODES


//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//
//	static const char* originalfile = "originalfile.txt";
//	static const char* editedfile = "editedfile.txt";
//
//	//file* fh = fopen(originalfile,"w");
//	//	fclose(fh);
//
//	//rename(originalfile, editedfile);
//
//	remove(editedfile);
//
//	return 0;
//
//}
//

#include <iostream>
#include <string>

using namespace std;

constexpr int maxbuffer = 1024;


int main() {

	const char* filename = "mythisfile.txt";
	const char* information = "lorem ipsum dolor sit amet\n";

//	FILE* fh = fopen(filename, "a");

//	for (int i = 0; i < 5000; ++i)
	//{
//		fputs(information, fh);
	//}
//	fclose(fh);


	char buf[maxbuffer];

	FILE* fh = fopen(filename, "r");
	while (fgets(buf, maxbuffer, fh)) {

		fputs(buf, stdout);
	}
	fclose(fh);

	return 0;
}