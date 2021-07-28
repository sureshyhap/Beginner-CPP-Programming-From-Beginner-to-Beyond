#include <iostream>
#include <fstream>
#include <algorithm>
#include "FileNotFoundError.h"

int search_and_respond(std::ifstream& infile, const std::string& substring);

int main(int argc, char* argv[]) {
  try {
    std::ifstream infile("romeoandjuliet.txt");
    if (!infile.is_open()) {
      throw FileNotFoundError();
    }
    
    std::string substring;
    std::cout << "Enter the substring to search for: ";
    std::cin >> substring;

    return search_and_respond(infile, substring);
  }
  catch (const FileNotFoundError& e) {
    std::cerr << e.what() << '\n';
    return 1;
  }
  catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}

int search_and_respond(std::ifstream& infile, const std::string& substring) {
  std::string word;
  int word_count = 0;
  int matches = 0;
  while (infile >> word) {
    ++word_count;
    if (word.find(substring) != std::string::npos) {
      ++matches;
    }
  }
  std::cout << word_count << " words were searched...\n";
  std::cout << "The substring " << substring << " was found " << matches << " times\n\n";
  return 0;  
}
