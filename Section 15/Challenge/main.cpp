// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include <string>

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    std::cout << "\n\n\n";

    Checking_Account c1("First", 0.0);
    c1.deposit(1000.0);
    c1.withdraw(100.0);
    std::cout << c1 << '\n';


    std::cout << "\n\n\n";
    Trust_Account t1("Second", 12000.0);
    t1.withdraw(100);
    std::cout << t1 << '\n';
    t1.withdraw(6000);
    std::cout << t1 << '\n';    
    t1.withdraw(500);
    std::cout << t1 << '\n';
    t1.withdraw(200);
    std::cout << t1 << '\n';
    t1.withdraw(100);
    std::cout << t1 << '\n';

    return 0;
}

