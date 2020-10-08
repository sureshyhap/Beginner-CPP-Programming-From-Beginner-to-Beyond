#include <iostream>

int main(int argc, char* argv[]) {
  // Dollars
  const double price_per_small_room {25.0};
  // Dollars
  const double price_per_large_room {35.0};
  const double tax_rate {.06};
  // Days valid
  const int valid {30};

  std::cout << "Estimate for carpet cleaning service" << std::endl;
  
  std::cout << "Number of small rooms: ";
  int number_of_small_rooms {0};
  std::cin >> number_of_small_rooms;
  
  std::cout << "Number of large rooms: ";
  int number_of_large_rooms {0};
  std::cin >> number_of_large_rooms;
  
  std::cout << "Price per small room: $" << price_per_small_room << std::endl;
  std::cout << "Price per large room: $" << price_per_large_room << std::endl;
  
  double cost {(price_per_small_room * number_of_small_rooms) +
      (price_per_large_room * number_of_large_rooms)};
  std::cout << "Cost: $" << cost << std::endl;
  
  double tax {cost * tax_rate};
  std::cout << "Tax: $" << tax << std::endl;

  std::cout << "===============================" << std::endl;
  
  double total {cost + tax};
  std::cout << "Total estimate: $" << total << std::endl;

  std::cout << "This estimate is valid for " << valid << " days" << std::endl;
  
  return 0;
}
