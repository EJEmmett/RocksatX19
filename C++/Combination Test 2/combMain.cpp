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
//#include "writing.h"
//no longer required. ^^
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
		<<"8. Random MD5 hash"
		<<"9. pass hash\n"
		<<"10. Exit.\n";
	cin >> choice;
//the menu will never be cleared while this is tested. system("CLS");
	return choice;
}

char* getTime(){
	return ctime(new time_t(time(0)));
	//COMMENT: gets the time from the system which will only be used for testing.
}

int main(){
	Writing write;
	Random rand;
	Server start;
	string hash, word, newValue;
	int input, r;
	do{
		input = menu();
		switch(input){
			case 1:
				//COMMENT: randomly sets the hash value, currently a work in progress.
  	        	md1 = md5("ssdd");
          		cout << "this should work:? " << md1 << endl;
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
				word = rand.readFileTest();
				cout << "The random word is: " << word << endl;
			break;
			case 6:
				cout << "Starting server\n" << start.runServer() << endl;
			break;
			case 7: start.runServer();
			break;
			case 8:
     		   newValue = rand.readFileTest();
     		   cout << "MD5 random value: " << md5(newValue) << endl;
			break;
			case 9:
				hash = rand.readFileTest();
				start.setHash(hash);
				cout << "Succesful";
			break;
			case 10: cout <<"EXITING"<<endl;
			break;
			default: cout << "invalid choice"<<endl;
			break;
		}
	}while(input != 10);
	//COMMENT: tests.
	//cout << "\n MD5: " << hash;
	//system("PAUSE");
	//Print funciton for both ints and strings


	return 0;
}
