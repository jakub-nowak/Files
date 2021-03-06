#include <iostream>
#include <regex>
#include <string>

int
main(void)
{
  // http://www.cplusplus.com/reference/regex/ECMAScript/

  std::string str = "Hello world";
  std::regex rx("^.+ello.+d$");

  if (regex_search(str.begin(), str.end(), rx)) {
    std::cout << "matched" << std::endl;
  } else {
    std::cout << "not matched" << std::endl;
  }

  return 0;
}
