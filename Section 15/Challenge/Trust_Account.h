#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
  using Savings_Account::Savings_Account;
 public:
  Trust_Account();
  bool deposit(double amount);
  bool withdraw(double amount);
 protected:
  int num_withdrawals_year = 0;
};

#endif // _TRUST_ACCOUNT_H
