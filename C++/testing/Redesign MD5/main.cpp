//main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <time.h>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include "wordGenNew.h"
/* this no longer is required #include "MD5New.h"*/
#include "md5.h"


using namespace std;

int menu(){
	int choice;
	cout<<"CTU RockSat2019 Testing:\n\n"
		<<"1. Run MD5 Generator.\n"
		<<"2. Print Time.\n"
		<<"3. Random Number test\n"
		<<"4. Random number loop testing\n"
		<<"5. Read file list test\n"
    <<"6. Random MD5 hash.\n"
    <<"7. Exit.\n";
	cin >> choice;
//the menu will never be cleared while this is tested. system("CLS");
	return choice;
}

char* getTime(){
	return ctime(new time_t(time(0)));
	//COMMENT: gets the time from the system which will only be used for testing.
}


int main(){
  string hash, md1, newValue;
  int input, r;
  Random rand;
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
        cout << "Test: " << rand.readFileTest();
      break;
      case 6:
        newValue = rand.readFileTest();
        cout << "MD5 random value: " << md5(newValue) << endl;
      break;
      case 7: cout << "exiting"<<endl;
      break;
			default: cout << "invalid choice"<<endl;
    }
  }while(input != 7);
  return 0;
}
