#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
  //---- WRITE YOUR CODE BELOW THIS LINE----
  int count = {0};
  int i = {0};
  int size = vec.size();
  while (i < size and vec.at(i) != -99) {
    ++i;
    ++count;
  }
    
  //---- WRITE YOUR CODE ABOVE THIS LINE----
  //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
  return count;
}
