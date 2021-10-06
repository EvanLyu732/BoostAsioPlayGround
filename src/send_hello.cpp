#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main()
{
    std::string buf; //raw buffer
    buf = "Hello";
    //buffer satisfies ConstBufferSequence
    asio::const_buffer output_buffer = asio::buffer(buf);
    return 0;
}