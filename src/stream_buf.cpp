#include <boost/asio.hpp>
#include <iostream>

using namespace boost;

int main()
{
    asio::streambuf buf;
    std::ostream output(&buf);
    output << "Messages1\nMessage2";

    std::istream input(&buf);
    std::string message1;
    std::getline(input, message1);
    return 0;
}
