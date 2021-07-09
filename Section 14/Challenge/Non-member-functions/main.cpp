#include <iostream>
#include "my_string.h"

int main(int argc, char* argv[]) {
  My_String s1;
  My_String s4("Hello");
  My_String s2(s4);
  My_String s3(My_String("There"));
  {
    My_String s5("Howdy");
  }
  s1 = s4;
  s2 = My_String("Hola");
  std::cout << s1.get_str() << '\n';
  std::cout << -s1 << '\n';
  std::cout << std::boolalpha << (s1 == s4) << '\n';
  std::cout << (s1 != s4) << '\n';
  std::cout << (s1 < s3) << '\n';
  std::cout << (s1 > s3) << '\n';
  std::cout << (s1 + s3) << '\n';
  s1 += s3;
  std::cout << s1 << '\n';
  std::cout << (s1 * 5) << '\n';
  s1 *= 4;
  std::cout << s1 << '\n';
  ++s1;
  std::cout << s1 << '\n';
  --s1;
  std::cout << s1 << '\n';
  s1++;
  std::cout << s1 << '\n';
  s1--;
  std::cout << s1 << '\n';
  return 0;
}
