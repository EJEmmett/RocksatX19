//randomWordGen.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "randomWordGen.h"
using namespace std;

Random::Random()
{
	
}

void Random::setRandom(int r)
{
	random = r;
}

int Random::returnNumber()
{
	r = rand() %  80277 + 1;
	return r;
}
