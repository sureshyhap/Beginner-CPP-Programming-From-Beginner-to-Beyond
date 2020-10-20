#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<int> vector1, vector2;
  
  vector1.push_back(10);
  vector1.push_back(20);

  std::cout << vector1.at(0) << ' ' << vector1.at(1) << '\n';
  std::cout << "Size: " << vector1.size() << '\n';

  vector2.push_back(100);
  vector2.push_back(200);

  std::cout << vector2.at(0) << ' ' << vector2.at(1) << '\n';
  std::cout << "Size: " << vector1.size() << '\n';  

  std::vector<std::vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  std::cout << vector_2d.at(0).at(0) << ' ' << vector_2d.at(0).at(1) << '\n';
  std::cout << vector_2d.at(1).at(0) << ' ' << vector_2d.at(1).at(1) << '\n';

  vector1.at(0) = {1000};
  
  std::cout << vector_2d.at(0).at(0) << ' ' << vector_2d.at(0).at(1) << '\n';
  std::cout << vector_2d.at(1).at(0) << ' ' << vector_2d.at(1).at(1) << '\n';

  std::cout << vector1.at(0) << ' ' << vector1.at(1) << '\n';
  
  return 0;
}
