#include <iostream>
#include <vector>
#include <cctype>

void display_menu();
void print(const std::vector<int>& v);
void add(std::vector<int>& v);
void mean(const std::vector<int>& v);
void smallest(const std::vector<int>& v);
void largest(const std::vector<int>& v);
void quit();
void unknown();

int main(int argc, char* argv[]) {
  char selection = {};
  std::vector<int> v;
  do {
    display_menu();
    std::cin >> selection;
    selection = toupper(selection);
    switch (selection) {
    case 'P':
      print(v);
      break;
    case 'A':
      add(v);
      break;
    case 'M':
      mean(v);
      break;
    case 'S':
      smallest(v);
      break;
    case 'L':
      largest(v);
      break;
    case 'Q':
      quit();
      break;
    default:
      unknown();
    }
  } while (selection != 'Q');
  return 0;
}

void display_menu() {
  std::cout << "\nP - Print numbers\n";
  std::cout << "A - Add a number\n";
  std::cout << "M - Display mean of the numbers\n";
  std::cout << "S - Display the smallest number\n";
  std::cout << "L - Display the largest number\n";
  std::cout << "Q - Quit\n";
  std::cout << "\nEnter your choice: ";
}

void print(const std::vector<int>& v) {
  if (v.empty()) {
    std::cout << "[] - the list is empty\n";
    return;
  }
  std::cout << "[ ";
  for (auto elem : v) {
    std::cout << elem << ' ';
  }
  std::cout << "]";
}

void add(std::vector<int>& v) {
  std::cout << "Enter a number to add: ";
  int num = {};
  std::cin >> num;
  v.push_back(num);
  std::cout << num << " added\n";
}

void mean(const std::vector<int>& v) {
  if (v.empty()) {
    std::cout << "Unable to calculate the mean - no data\n";
    return;
  }
  double mean = {0.0};
  int sum = {0};
  for (auto elem : v) {
    sum += elem;
  }
  mean = static_cast<double>(sum) / v.size();
  std::cout << "The mean of the numbers is " << mean << '\n';
}

void smallest(const std::vector<int>& v) {
  if (v.empty()) {
    std::cout << "Unable to determine the smallest number - list is empty\n";
    return;
  }
  int min = {v.front()};
  for (auto elem : v) {
    if (elem < min) {
      min = {elem};
    }
  }
  std::cout << "The smallest number is " << min << '\n'; 
}

void largest(const std::vector<int>& v) {
  if (v.empty()) {
    std::cout << "Unable to determine the largest number - list is empty\n";
    return;
  }
  int max = {v.front()};
  for (auto elem : v) {
    if (elem > max) {
      max = {elem};
    }
  }
  std::cout << "The largest number is " << max << '\n';
}

void quit() {
  std::cout << "Goodbye\n";
}

void unknown() {
  std::cout << "Unknown selection, please try again\n";  
}
