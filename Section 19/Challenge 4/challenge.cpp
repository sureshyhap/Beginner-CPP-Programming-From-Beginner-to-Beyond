#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(int argc, char* argv[]) {
  std::ifstream infile("romeoandjuliet.txt");
  std::ofstream outfile("randjlinenumbers.txt", std::ios::trunc);
  if (!infile || !outfile) {
    std::cerr << "Could not open files\n";
    return 1;
  }
  std::string line;
  int line_num = 1;
  while (std::getline(infile, line)) {
    outfile << std::setw(8) << std::left << line_num++ << line;
  }
  infile.close();
  outfile.close();
  return 0;
}
