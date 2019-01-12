//randomWordGen.h
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Random
{
	public:
		Random();
		void setRandom(int r);
		int returnNumber();
	
	private:
		int random;
};
