//MD5New.cpp
//md5 encryption header file
#include <iostream>
#include <string>
#include <fstream>
#include "MD5New.h"
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
