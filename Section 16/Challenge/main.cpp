// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "I_Printable.h"

using namespace std; 

int main() {
  cout.precision(2);
  cout << fixed;
   
    /*    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );

    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    */
    
    // Savings 

    vector<Account*> sav_accounts;
    sav_accounts.push_back(new Savings_Account {} );
    sav_accounts.push_back(new Savings_Account {"Superman"} );
    sav_accounts.push_back(new Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(new Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
   // Checking
   
    vector<Account*> check_accounts;
    check_accounts.push_back(new Checking_Account {} );
    check_accounts.push_back(new Checking_Account {"Kirk"} );
    check_accounts.push_back(new Checking_Account {"Spock", 2000} );
    check_accounts.push_back(new Checking_Account {"Bones", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
  
    vector<Account*> trust_accounts;
    trust_accounts.push_back(new Trust_Account {} );
    trust_accounts.push_back(new Trust_Account {"Athos", 10000, 5.0} );
    trust_accounts.push_back(new Trust_Account {"Porthos", 20000, 4.0} );
    trust_accounts.push_back(new Trust_Account {"Aramis", 30000} );

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    return 0;

    for (auto element : sav_accounts) {
      delete element;
    }
    for (auto element : check_accounts) {
      delete element;
    }
    for (auto element : trust_accounts) {
      delete element;
    }    
}

