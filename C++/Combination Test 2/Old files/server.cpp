#include <ctime>
#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

std::string make_daytime_string()
{
	std::time_t now = std::time(0);
	return std::ctime(&now);
}

int main()
{
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
			std::string message = make_daytime_string();
			//boost::system::error_code igonored_error;
			std::string message2 = "fuck u";
			//writes the message.
			boost::asio::write(socket, boost::asio::buffer(message)/*, ignored_error*/);
			boost::asio::write(socket, boost::asio::buffer(message2));
		}
	}	
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

