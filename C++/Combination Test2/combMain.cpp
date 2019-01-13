#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <time.h>
#include <vector>
#include <cstdlib>
//#include <sys/types.h>
#include "hash1.h"
#include "writing.h"
#include "randomWordGen.h"
using namespace std; using std::cout; using std::endl;

int menu()
{
	int choice;
	cout<<"\t\tCTU RockSat2019 Testing:\n"
		<<"\t1. Run MD5 Generator.\n"
		<<"\t2. Print Time.\n"
		<<"\t3. Random Number test\n"
		<<"\t4. Random number loop testing\n"
		<<"\t5. Read file list test\n"
		<<"\t9. Exit.\n";
	cin >> choice;
//the menu will never be cleared while this is tested. system("CLS");
	return choice;
}

int getTime()
{
	int c;
	c = clock();
	return c;
}

int main(int argc, char** argv) {
	Hash h;
	Writing write;
	Random rand;
	string hash;
	int time, input, r;
//	time = getTime();
	do
	{
		input = menu();
		switch(input)
		{
			case 1:
				h.setValue("ssdd");
				h.outPut();
				hash = h.getValue();
				write.mainWrite();
			break;
			case 2:
				cout << "time: " << getTime();
			break;
			case 3:
				cout << "Random number: " << rand.returnNumber() << endl;
			break;
			case 4:
				cout << "Random number loop testing\n" << rand.getWordComb() << endl;
			break;
			case 5:
				rand.readFileTest();
			break;
			case 9: cout <<"EXITING"<<endl;
			break;
			default: cout << "invalid choice"<<endl;
			break;
		}
	}while(input != 9);
//	cout << "\n MD5: " << hash;
	//system("PAUSE");
	//Print funciton for both ints and strings
	

	return 0;
}

