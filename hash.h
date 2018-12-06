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
		void setValue(int hashs);
		void outPut() const;
	private:
		int hash;
};

void Hash::setValue(string hashs) {hashs = hash;}
string Hash::getValue() const (return hashs;)
void Hash::outPut() const ( cout << "md5 hash: "
								<< md5(getValue())<<endl;)
