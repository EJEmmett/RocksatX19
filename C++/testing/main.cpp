//this is the main program for the networking side of this years rocksat!
#include <iostream>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <winsock2.h>
#include <time.h>
//#include <netdb.h>

#include "hash.h"
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
//	h.setValue("test");
//	h.outPut();
	cout << "time: " << getTime();
	hash = h.getValue();
	system("PAUSE");
	return 0;
}

