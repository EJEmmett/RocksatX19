//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

#ifndef WRITING_H
#define WRITING_H

class Writing
{
	public:
		Writing();
		string setString(string writeS);
		string importHash(string hash);
		int setInt(int writeI);
		
		string getHash() const;
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
		string h;
		
};
#endif
