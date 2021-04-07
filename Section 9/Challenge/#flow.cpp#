#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  char selection = {};
  std::vector<int> v;
  do {
    std::cout << "\nP - Print numbers\n";
    std::cout << "A - Add a number\n";
    std::cout << "M - Display mean of the numbers\n";
    std::cout << "S - Display the smallest number\n";
    std::cout << "L - Display the largest number\n";
    std::cout << "Q - Quit\n";
    std::cout << "\nEnter your choice: ";
    std::cin >> selection;
    switch (selection) {
    case 'P':
    case 'p': {
      if (v.empty()) {
	std::cout << "[] - the list is empty\n";
	break;
      }
      std::cout << "[ ";
      for (auto elem : v) {
	std::cout << elem << ' ';
      }
      std::cout << "]";
      break;
    }
    case 'A':
    case 'a': {
      std::cout << "Enter a number to add: ";
      int num = {};
      std::cin >> num;
      v.push_back(num);
      std::cout << num << " added\n";
      break;
    }
    case 'M':
    case 'm': {
      if (v.empty()) {
	std::cout << "Unable to calculate the mean - no data\n";
	break;
      }
      double mean = {0.0};
      int sum = {0};
      for (auto elem : v) {
	sum += elem;
      }
      mean = static_cast<double>(sum) / v.size();
      std::cout << "The mean of the numbers is " << mean << '\n';
      break;
    }
    case 'S':
    case 's': {
      if (v.empty()) {
	std::cout << "Unable to determine the smallest number - list is empty\n";
	break;
      }
      int min = {v.front()};
      for (auto elem : v) {
	if (elem < min) {
	  min = {elem};
	}
      }
      std::cout << "The smallest number is " << min << '\n';
      break;
    }
    case 'L':
    case 'l': {
      if (v.empty()) {
	std::cout << "Unable to determine the largest number - list is empty\n";
	break;
      }
      int max = {v.front()};
      for (auto elem : v) {
	if (elem > max) {
	  max = {elem};
	}
      }
      std::cout << "The largest number is " << max << '\n';
      break;
    }
    case 'Q':
    case 'q': {
      std::cout << "Goodbye\n";
      break;
    }
    default: {
      std::cout << "Unknown selection, please try again\n";
    }
    }
  } while (selection != 'Q' and selection != 'q');
  return 0;
}
