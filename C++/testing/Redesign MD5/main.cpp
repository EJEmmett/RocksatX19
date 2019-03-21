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
//#include "wordGenNew.h"
#include "wordGenNew.cpp"
//#include "MD5New.h"
#include "MD5New.cpp"

using namespace std;

int menu(){
	int choice;
	cout<<"CTU RockSat2019 Testing:\n\n"
		<<"1. Run MD5 Generator.\n"
		<<"2. Print Time.\n"
		<<"3. Random Number test\n"
		<<"4. Random number loop testing\n"
		<<"5. Read file list test\n"
		<<"6. Exit.\n";
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
  string hash;
  int input, r;
  Random rand;
  do{
    input = menu();
    switch(input){
      case 1:
        //COMMENT: randomly sets the hash value, currently a work in progress.
        h.setValue("ssdd");
        h.outPut();
        hash = h.getValue();
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
      case 6: cout << "exiting"<<endl;
			default: cout << "invalid choice"<<endl;
			break;
    }
  }while(input != 6);
  return 0;
}
