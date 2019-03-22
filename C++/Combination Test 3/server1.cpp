#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <unistd.h>
#include "server1.h"

using boost::asio::ip::tcp;
using namespace std;

Server::Server()
{
	
};

void Server::setHash(string hashs) 
{
	hashs = hash;
}

string Server::getHash()
{
	return hash;
}

string Server::runServer()
{
/*	std::string make_daytime_string()
	{
		std::time_t now = std::time(0);
		return std::ctime(&now);
	}
*/
	try
	{
		boost::asio::io_service io_service;
		tcp::acceptor acceptor(io_service, tcp::endpoint(tcp::v4(), 13));

		for (;;)
		{
		//create a socket
			tcp::socket socket(io_service);
			//then wait and listen
			acceptor.accept(socket);
			//this is the message
			//boost::system::error_code igonored_error;
			std::string message = "big brained\n";
			std::string message2 = getHash();
			//writes the message.
		//	boost::asio::write(socket, boost::asio::buffer(message)/*, ignored_error*/);
			boost::asio::write(socket, boost::asio::buffer(message2)/*, ignored_error*/);
		/*	boost::asio::io_service.post([this](){
				boost::asio::socket.->close();
				boost::asio::socket.->release(nullptr);
			)};*/
		//	boost::system::close( boost::system::tcp::socket);

		}
	}	
	catch (std::exception& e)
	{
		return e.what();
	}

};
