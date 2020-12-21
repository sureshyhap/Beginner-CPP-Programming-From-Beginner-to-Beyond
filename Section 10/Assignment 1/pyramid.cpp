#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << "Enter a phrase: ";
  std::string phrase;
  std::cin >> phrase;
  int length = phrase.length();
  for (int i = 0; i < length; ++i) {
    for (int j = 0; j < length - i - 1; ++j) {
      std::cout << ' ';
    }
    for (int j = 0; j <= i; ++j ) {
      std::cout << phrase[j];
    }
    for (int j = i - 1; j >= 0; --j) {
      std::cout << phrase[j];
    }
    std::cout << '\n';
  }
  
  return 0;
}
