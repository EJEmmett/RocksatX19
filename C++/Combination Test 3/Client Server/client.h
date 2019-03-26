#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <boost/asio.hpp>
#include <boost/array.hpp>

using boost::asio::ip::tcp;
using namespace std;
#ifndef CLIENT_H
#define CLIENT_H

class Client
{
  public:
    Client();
    void Start();

}

#endif
