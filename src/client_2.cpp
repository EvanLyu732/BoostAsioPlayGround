#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main()
{
    //connect server ip and port number
    std::string raw_ip_address = "127.0.0.1";
    unsigned short port_num = 3333;

    try {
        //creating an endpoint designating a target server
        asio::ip::tcp::endpoint ep(asio::ip::address::from_string(raw_ip_address),
            port_num);
        asio::io_service ios;
        //creating and open a socket
        asio::ip::tcp::socket sock(ios, ep.protocol());
        sock.connect(ep);

        //the socket is connect and can be used to send data
    }
    catch (system::system_error &e) {
        std::cout << "Error occured! Error code = " << e.code()
                << ". Message: " << e.what();
        return e.code().value();
    }

    return 0;

}