//wordGenNew.h
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#pragma once
using namespace std;

class Random{
	public:
		Random();
		void setRandom(int r);
		int returnNumber();
		int getWordComb();
		void readFileTest();

	private:
		int random;
};
