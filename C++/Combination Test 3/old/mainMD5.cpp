//this is the main program for the networking side of this years rocksat!
//mainMD5.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sys/types.h>
//#include <winsock2.h>
#include <time.h>
//#include <netdb.h>
using std::cout; using std::endl;
#include "hash1.h"
using namespace std;

int getTime()
{
	int c;
	c = clock();
	return c;
}

int main(int argc, char** argv) {
	Hash h;
	string hash;
	h.setValue("test");
	h.outPut();
	cout << "time: " << getTime();
	hash = h.getValue();
	cout << "\n MD5: " << hash;
	//system("PAUSE");
	return 0;
}

