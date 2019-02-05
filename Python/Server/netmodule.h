#include <boost/asio.hpp>
#ifndef NET_H
#define NET_H

class Net{
  public:
    Net(char*, char*);
    int send(char*);
  private:
    boost::asio::io_context io_context;
    boost::asio::ip::udp::socket sock;
    boost::asio::ip::udp::resolver resolver;
    boost::asio::ip::udp::resolver::results_type endpoints;
};

Net::Net(char* ip, char* port)
  : sock(io_context, boost::asio::ip::udp::endpoint
    (boost::asio::ip::udp::v4(), 0)), resolver(io_context)
{
  endpoints = resolver.resolve(udp::v4(), ip, port);
}

int Net::send(char* message){
  try{
    size_t message_length = std::strlen(message);
    sock.send_to(boost::asio::buffer(message, message_length),
      *endpoints.begin());
  }catch(std::exception& e){
    return 1;
  }
  return 0;
}

#endif
