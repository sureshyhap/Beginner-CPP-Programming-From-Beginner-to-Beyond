#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iomanip>

int main(int argc, char* argv[]) {
  std::fstream infile("responses.txt", std::ios::in);
  if (!infile) {
    std::cerr << "No input file exists\n";
    return 1;
  }
  // File is set properly
  else {
    std::string correct;
    std::string name;
    std::string response;
    std::map<std::string, int> scores;
    std::getline(infile, correct);
    int length = correct.length();
    int total_score = 0;
    while (infile >> name >> response) {
      int score = 0;
      for (int i = 0; i < length; ++i) {
	if (correct[i] == response[i]) {
	  ++score;
	}
      }
      scores[name] = score;
      total_score += score;
    }
    double average_score = {};
    int size = scores.size();
    if (size) {
      average_score = static_cast<double>(total_score) / size;
    }
    else {
      average_score = 0;
    }
    // Scores have been calculated by now
    std::cout << std::setw(10) << std::left << "Student";
    std::cout << std::setw(10) << std::right << "Score" << std::endl;
    std::cout << std::setfill('-') << std::setw(20) << "";
    std::cout << std::setfill(' ') << std::endl;
    for (std::map<std::string, int>::const_iterator cit = scores.begin();
	 cit != scores.end(); ++cit) {
      std::cout << std::setw(10) << std::left << cit->first;
      std::cout << std::setw(10) << std::right << cit->second << std::endl;
    }
    std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(15) << std::left << "Average Score";
    std::cout << std::setw(5) << std::right << average_score << std::endl;
    infile.close();
  }
  return 0;
}

