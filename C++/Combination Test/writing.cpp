//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
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
	//cout<<"Enter a string: \n";
//	cin>>stringTest;
	
//	cout<<"Enter a int: \n";
//	cin>>intTest;
	ofstream ws;
	ws.open("out.txt");
	ws << h.getValue() << std::endl;
//	ws << intTest<<std::endl;
	//ws << "\n" << std::endl;
	ws.close();
	
}
