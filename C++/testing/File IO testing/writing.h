//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

#ifndef WRITING_H
#define WRITING_H
class Writing{
	public:
		Writing();
		string setString(string writeS);
		int setInt(int writeI);
		void writeString();
		void writeInt();
	private:
		string s;
		int i;
};

#endif
