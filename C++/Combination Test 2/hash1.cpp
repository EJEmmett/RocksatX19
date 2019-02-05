//hash1.cpp
//md5 encryption header file 
#include <iostream>
#include <string>
#include <fstream>
#include "hash1.h"
//Hash::Hash(){}

void Hash::setValue(string hashs)
{
	//COMMENT: sets the value of the hash
	hashs = hash;
}

string Hash::getValue() const 
{
	//COMMENT: returns the hash to whatever needs it.
	return md5(hash);
}

void Hash::outPut() const 
{
	//COMMENT: prints the hash value to the screen.
	cout<< "md5 hash: "
		<< getValue()<<endl;
}

