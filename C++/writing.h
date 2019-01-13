//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>
//#include "hash1.h"
using namespace std;

#ifndef WRITING_H
#define WRITING_H

class Writing
{
	public:
		Writing();
		
		void mainWrite();
	
	protected: 
		string stringTest;
		int intTest;
		
	private:
		string s;
		int i;
		
		
};
#endif
