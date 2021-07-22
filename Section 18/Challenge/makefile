main: main.o I_Printable.o Account.o Account_Util.o Checking_Account.o Savings_Account.o Trust_Account.o IllegalBalanceException.o InsufficientFundsException.o
	g++ -o main main.o I_Printable.o Account.o Account_Util.o Checking_Account.o Savings_Account.o Trust_Account.o IllegalBalanceException.o InsufficientFundsException.o
I_Printable.o: I_Printable.cpp I_Printable.h
	g++ -c I_Printable.cpp
Account.o: Account.cpp I_Printable.h Account.h
	g++ -c Account.cpp
Account_Util.o: Account_Util.cpp Account_Util.h
	g++ -c Account_Util.cpp 
Checking_Account.o: Checking_Account.cpp I_Printable.h Account.h
	g++ -c Checking_Account.cpp
Savings_Account.o: Savings_Account.cpp I_Printable.h Account.h
	g++ -c Savings_Account.cpp
Trust_Account.o: Trust_Account.cpp I_Printable.h Account.h Savings_Account.h
	g++ -c Trust_Account.cpp
IllegalBalanceException.o: IllegalBalanceException.cpp
	g++ -c IllegalBalanceException.cpp
InsufficientFundsException.o: InsufficientFundsException.cpp
	g++ -c InsufficientFundsException.cpp
main.o: main.cpp I_Printable.o Account.o Account_Util.o Checking_Account.o Savings_Account.o Trust_Account.o IllegalBalanceException.o InsufficientFundsException.o
	g++ -c main.cpp
