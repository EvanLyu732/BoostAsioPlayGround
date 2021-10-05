#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main()
{
    asio::io_service ios;
    asio::ip::tcp protocol = asio::ip::tcp::v4();
    asio::ip::tcp::socket socket(ios);
    boost::system::error_code ec;
    socket.open(protocol, ec);

    if (ec.value() != 0) {
        std::cout << "Failed to open socket! Error code = "
                  << ec.value() << ". Message:" << ec.message() <<
                  std::endl;
        return ec.value();
    }
    return 0;
}