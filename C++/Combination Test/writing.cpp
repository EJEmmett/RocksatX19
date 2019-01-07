//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "writing.h"
using namespace std;

Writing::Writing()
{
	
}

string Writing::setString(string writeS) 
{
	writeS = s;
}
int Writing::setInt(int writeI) 
{
	writeI = i;
}

string Writing::importHash(string hash)
{
	hash = h;
}

string Writing::getHash() const
{
	return h;
}
/*

void Writing::writeString()
{
	//ofstream ws("outPut.txt", ios::out | ios::trunc);
	ofstream ws;
	ws.open("out.txt");
	ws << s << "\n";
	ws.close();
}

void Writing::writeInt()
{
	//ofstream wi("outPut.txt", ios::out | ios::trunc);
	ofstream wi;
	wi.open("out.txt");
	wi << i << "\n";
	wi.close();
}
*/

void Writing::testString()
{	
	//cout<<"Enter a string: \n";
//	cin>>stringTest;
	
//	cout<<"Enter a int: \n";
//	cin>>intTest;
	string hash;
	h = hash;	
	ofstream ws;
	ws.open("out.txt");
	ws << Writing::getHash() << std::endl;
//	ws << intTest<<std::endl;
	//ws << "\n" << std::endl;
	ws.close();
	
}
