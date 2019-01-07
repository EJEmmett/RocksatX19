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

string Writing::setString(string writeS) {s = writeS;}
int Writing::setInt(int writeI) {i = writeI;}

void Writing::writeString()
{
	//ofstream ws("outPut.txt", ios::out | ios::trunc);
	ofstream ws;
	ws.open("out.txt", ios::out);
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
