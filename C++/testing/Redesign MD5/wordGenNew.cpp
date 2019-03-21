//wordGenNew.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include "wordGenNew.h"
using namespace std;

Random::Random(){}

void Random::setRandom(int r)
{
	random = r;
}

int Random::returnNumber()
{
	int r;
	r = rand() %  80277 + 1;
	return r;
}

int Random::getWordComb()
{
	int i, r, r1, r2;
	i = 0;
	do{
		r1 = Random::returnNumber();
		r2 = r1 + r2;
		i = i + 1;
	}while(i < 10);
	return r2;
}

void Random::readFileTest()
{
	ifstream in("dictionary.txt");
	string line, s, word, mainWords;
	int rand, rand2, count;
	double tmp;
	//COMMENT: this is a test to get the line number of a word.
	/*tmp == temp var
	while (getline(in, line))
	{
		cout << line <<endl;
	}*/
	rand = Random::returnNumber();
	//cout << rand << endl;
	ifstream file1 ("dictionary.txt", ios::in);

	vector<string> readFromFile;

	while(file1>>s)
	{
		readFromFile.push_back(s);
	}

	/*for(int i=0; i<readFromFile.size(); i++)
	{
		cout<<readFromFile[i]<<endl;
	}*/
	//cout << readFromFile[rand-1] << endl;
	for(int o=0; o<5; o++)
	{
		//COMMENT: random word from the dictonary test.
		rand2 = Random::returnNumber();
		word = readFromFile[rand2-1];
		mainWords = mainWords + " " + word;
	}
	cout << mainWords;
}
