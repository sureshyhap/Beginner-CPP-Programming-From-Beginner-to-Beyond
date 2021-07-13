#include "Trust_Account.h"

bool Trust_Account::deposit(double amount) {
  bool success = Savings_Account::deposit(amount);
  if (!success) {
    return false;
  }
  if (amount >= 5000.0) {
    Savings_Account::deposit(50.0);
  }
  return true;
}

bool Trust_Account::withdraw(double amount) {
  if (num_withdrawals_year < 3) {
    if (amount < .20 * balance) {
      Savings_Account::withdraw(amount);
      ++num_withdrawals_year;
      return true;
    }
    else {
      std::cout << "Cannot withdraw more than 20% per transaction.\n";
    }
  }
  else {
    std::cout << "Reached maximum allowed number of withdrawals this year (3)\n";
  }
  return false;
}
