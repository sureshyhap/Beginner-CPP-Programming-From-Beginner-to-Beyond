#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Enter your favorite number between 1 and 100: ";
  int fav_number = 0;
  std::cin >> fav_number;
  std::cout << "Amazing!! That's my favorite number too!" << std::endl << \
    "No really!!, " << fav_number << " is my favorite number!";
  return 0;
}
