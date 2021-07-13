#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account {
  using Account::Account;
 public:
  bool withdraw(double amount);
};

#endif // _CHECKING_ACCOUNT_H_
