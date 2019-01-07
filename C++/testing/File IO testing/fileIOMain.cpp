//file io testing
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "writing.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int getTime()
{
	int c;
	c = clock();
	return c;
}*/

int main(int argc, char** argv) 
{
	Writing write;
//	string sTest;
//	int iTest = 0;
//	cout<<"Enter a string: \n";
//	cin>>sTest;
	
//	write.setString(sTest);
	
//	cout<<"Enter a int: \n";
//	cin>>iTest;
	
//	write.setInt(iTest);
	
	//write.writeString();
	//write.writeInt();
	
	//Print funciton for both ints and strings
	write.testString();


//	write.testInt();
	
	system("PAUSE");
	return 0;
}
