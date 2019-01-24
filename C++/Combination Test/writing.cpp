//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "writing.h"
#include "hash1.h"
using namespace std;

Writing::Writing()
{
	
}

void Writing::mainWrite()
{	
	string hash;
	Hash h;
	hash = h.getValue();

	ofstream ws;
	ws.open("out.txt");
	ws << h.getValue() << std::endl;

	ws.close();
	
}
