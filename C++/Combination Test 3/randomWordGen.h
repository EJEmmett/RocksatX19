//randomWordGen.h
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

#ifndef RANDOMWORDGEN_H
#define RANDOMWORDGEN_H

class Random
{
	public:
		Random();
		void setRandom(int r);
		int returnNumber();
		int getWordComb();
		string readFileTest();
	
	private:
		int random;
};

#endif
