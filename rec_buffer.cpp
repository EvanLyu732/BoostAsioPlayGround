#include <boost/asio.hpp>
#include <iostream>
#include <memory>

using namespace boost;

int main()
{
    //receive a block of data no more than 50 bytes
    const size_t BUF_SIZE_BYTES = 50;

    std::unique_ptr<char[]> buf(new char[BUF_SIZE_BYTES]);
    asio::mutable_buffer input_buf = asio::buffer(static_cast<void*>(buf.get()), 
        BUF_SIZE_BYTES);
    return 0;
}