#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <time.h>
//#include <sys/types.h>
#include "hash1.h"
#include "writing.h"
using namespace std; using std::cout; using std::endl;

int menu()
{
	int choice;
	cout<<"\t\tCTU RockSat2019 Testing:\n"
		<<"\t1. Run MD5 Generator.\n"
		<<"\t2. Print Time.\n"
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
	string hash;
	int time, input;
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

