//hash.h
//md5 encryption header file 
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "md5.h"
using namespace std;
//using std::cout; using std::endl;
class Hash{
	public:
		Hash() {};
		string getValue() const;
		void setValue(string hashs);
		void outPut() const;
	private:
		string hash;
};

