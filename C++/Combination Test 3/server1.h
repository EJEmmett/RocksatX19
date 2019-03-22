#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;
using namespace std;
#ifndef SERVER_H
#define SERVER_H

class Server
{
	public:
		Server();
		string getHash();
		void setHash(string hashs);
		string runServer();
	private:
		string hash;
};

#endif
