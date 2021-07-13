#include "Checking_Account.h"

bool Checking_Account::withdraw(double amount) {
  if (balance - amount - 1.50 >= 0) {
    balance -= (amount + 1.50);
    return true;
  }
  else {
    return false;
  }
}
