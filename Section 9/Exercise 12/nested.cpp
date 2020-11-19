#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----
  if (age < 16) {
    std::cout << "Sorry, come back in " << 16 - age << " years and be sure you own a car when you come back.";
  }
  else if (!has_car) {
    std::cout << "Sorry, you need to buy a car before you can drive!";
  }
  else {
    std::cout << "Yes - you can drive!";
  }
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
}
