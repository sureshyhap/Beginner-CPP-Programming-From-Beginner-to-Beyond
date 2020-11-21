#include <vector>
#include <iostream>
using namespace std;

int calculate_pairs(vector<int> vec) {
  //----WRITE YOUR CODE BELOW THIS LINE----
  int size = {vec.size()};
  if (size <= 1) {
    return 0;
  }
  double result = {0};
  for (int i = {0}; i < size; ++i) {
    for (int j = {i + 1}; j < size; ++j) {
      result += (vec.at(i) * vec.at(j));
    }
  }
     
  //----WRITE YOUR CODE ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
  return result;
}

int main() {
  std::vector<int> vec = {2, 4, 6, 8};
  std::cout << calculate_pairs(vec);
}
