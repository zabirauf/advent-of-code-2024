#include "hellolib.h"
#include <boost/algorithm/string.hpp>
#include <iostream>

using namespace hello;
using namespace boost;

int main() {
  hellolib hello{};
  int32_t error_code = hello.saySomething("Hello Modern C++ Development");
  if (error_code > 0) {
    return error_code;
  }
#ifdef WITH_OPENSSL
  error_code = hello.saySomethingHashed("Hello Modern C++ Development");
  if (error_code > 0) {
    return error_code;
  }
#endif

    std::string str = "Hello;;World;;How;;Are;;You";
    std::vector<std::string> tokens;
    
    boost::split(tokens, str, boost::is_any_of(";;"));
    
    for (const auto& token : tokens) {
        std::cout << token << std::endl;
    }
  return 0;
}
