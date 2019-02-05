#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <time.h>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include <boost/asio.hpp>
//#include <sys/types.h>
#include "hash1.h"
#include "writing.h"
#include "randomWordGen.h"
#include "server1.h"

using namespace std;

int menu(){
	int choice;
	cout<<"CTU RockSat2019 Testing:\n\n"
		<<"1. Run MD5 Generator.\n"
		<<"2. Print Time.\n"
		<<"3. Random Number test\n"
		<<"4. Random number loop testing\n"
		<<"5. Read file list test\n"
		<<"6. Start server without being able to exit\n"
		<<"7. start server in background\n"
		<<"8. pass hash\n"
		<<"9. Exit.\n";
	cin >> choice;
//the menu will never be cleared while this is tested. system("CLS");
	return choice;
}

char* getTime(){
	return ctime(new time_t(time(0)));
	//COMMENT: gets the time from the system which will only be used for testing.
}

int main(){
	Hash h;
	Writing write;
	Random rand;
	Server start;
	string hash;
	int input, r;
	do{
		input = menu();
		switch(input){
			case 1:
				//COMMENT: randomly sets the hash value, currently a work in progress.
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
				//COMMENT: reads the random word
				rand.readFileTest();
			break;
			case 6:
				cout << "Starting server\n" << start.runServer() << endl;
			break;
			case 7: start.runServer();
			break;
			case 8: 
				start.setHash(hash); 
				cout << hash;
			break;
			case 9: cout <<"EXITING"<<endl;
			break;
			default: cout << "invalid choice"<<endl;
			break;
		}
	}while(input != 9);
	//COMMENT: tests.
	//cout << "\n MD5: " << hash;
	//system("PAUSE");
	//Print funciton for both ints and strings
	

	return 0;
}

