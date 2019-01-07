#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <time.h>
//#include <sys/types.h>
#include "hash1.h"
#include "writing.h"
using namespace std; using std::cout; using std::endl;

int getTime()
{
	int c;
	c = clock();
	return c;
}


int main(int argc, char** argv) {
	Hash h;
	Writing write;
	string hash;
	h.setValue("test");
	h.outPut();
	//cout << "time: " << getTime();
	hash = h.getValue();
	cout << "\n MD5: " << hash;
	write.importHash(h.getValue());
	//system("PAUSE");
	//Print funciton for both ints and strings
	write.testString();

	return 0;
}

