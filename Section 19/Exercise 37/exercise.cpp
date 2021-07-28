#include <iostream>
#include <fstream>
#include <string>

void read_file(std::string file_name) {
    //---- YOU WRITE YOUR CODE BELOW THIS LINE----

  std::ifstream infile(file_name);
  if (!infile.is_open()) {
    std::cerr << "Error opening file" << std::endl;
    return;
  }
  std::string word;
  while (!infile.eof()) {
    infile >> word;
    std::cout << word << std::endl;
  }
   
    //---- YOU WRITE YOUR CODE ABOVE THIS LINE----
}
