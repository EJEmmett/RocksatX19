//hash.h
//md5 encryption header file 
#include <iostream>
#include <string>
#include <fstream>
#include "md5.h"
using namespace std;

class Hash{
	public:
		Hash();
		string getValue() const;
		void setValue(string hashs);
		void outPut() const;
	private:
		string hash;
};

Hash::Hash(){setValue("");}
void Hash::setValue(string hashs) {hashs = hash;}
string Hash::getValue() const {return md5(hash);}
void Hash::outPut() const {cout << "md5 hash: "
								<< getValue()<<endl;}
