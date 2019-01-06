//Testing file io
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int menu()
{
	int choice;
	cout<<"Menu:\n"
		<<"\t1. Start Test.\n"
		<<"\t2. End Test.\n";
	cin >> choice;
	return choice;
}

int main()
{
	int choice;
	choice = menu();
	cout<<"Choice " << choice<<endl;
	choice = 2;
	system("PAUSE");
	return 0;	
}
