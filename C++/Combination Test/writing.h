//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
//#include "hash1.h"
using namespace std;

#ifndef WRITING_H
#define WRITING_H

class Writing
{
	public:
		Writing();
		string setString(string writeS);
		int setInt(int writeI);
		
		void testString();
		void testInt();
		void writeString();
		void writeInt();
	protected: 
		string stringTest;
		int intTest;
		
	private:
		string s;
		int i;
		
		
};
#endif
