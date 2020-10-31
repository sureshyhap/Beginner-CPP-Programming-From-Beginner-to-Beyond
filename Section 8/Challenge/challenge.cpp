#include <iostream>

struct Change {
  int dollars = {}, quarters = {}, dimes = {}, nickels = {}, pennies = {};
  constexpr static int dollar_value = 100;
  constexpr static int quarter_value = 25;
  constexpr static int dime_value = 10;
  constexpr static int nickel_value = 5;
  constexpr static int penny_value = 1;
};

Change calc_change(int cents);

int main(int argc, char* argv[]) {
  std::cout << "Enter a number of cents: ";
  int amount = {};
  std::cin >> amount;
  struct Change change = {calc_change(amount)};
  std::cout << "Dollars: " << change.dollars << '\n';
  std::cout << "Quarters: " << change.quarters << '\n';
  std::cout << "Dimes: " << change.dimes << '\n';
  std::cout << "Nickels: " << change.nickels << '\n';
  std::cout << "Pennies: " << change.pennies << '\n';
  return 0;
}

Change calc_change(int cents) {
  struct Change change;
  
  change.dollars = {cents / Change::dollar_value};
  cents %= Change::dollar_value;

  change.quarters = {cents / Change::quarter_value};
  cents %= Change::quarter_value;

  change.dimes = {cents / Change::dime_value};
  cents %= Change::dime_value;

  change.nickels = {cents / Change::nickel_value};
  cents %= Change::nickel_value;

  change.pennies = {cents / Change::penny_value};
  cents %= Change::penny_value;

  return change;
}
