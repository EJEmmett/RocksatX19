//hash1.cpp
//md5 encryption header file 
#include <iostream>
#include <string>
#include <fstream>
#include "hash1.h"
//Hash::Hash(){}

void Hash::setValue(string hashs)
{
	hashs = hash;
}

string Hash::getValue() const 
{
	return md5(hash);
}

void Hash::outPut() const 
{
	cout<< "md5 hash: "
		<< getValue()<<endl;
}

