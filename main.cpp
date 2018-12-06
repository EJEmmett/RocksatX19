//this is the main program for the networking side of this years rocksat!
#include <iostream>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <winsock2.h>
//#include <netdb.h>

#include "hash.h"
using namespace std;

int main(int argc, char** argv) {
	Hash h;
	string hash;
//	h.setValue("test");
//	h.outPut();
	hash = h.getValue();
	system("PAUSE");
	return 0;
}

