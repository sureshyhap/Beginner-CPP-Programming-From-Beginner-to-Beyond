main: main.o I_Printable.o Account.o Account_Util.o Savings_Account.o Checking_Account.o Trust_Account.o
	g++ -o main main.o I_Printable.o Account.o Account_Util.o Savings_Account.o Checking_Account.o Trust_Account.o
I_Printable.o: I_Printable.cpp I_Printable.h
	g++ -c I_Printable.cpp
Account.o: Account.cpp Account.h
	g++ -c Account.cpp
Account_Util.o: Account_Util.cpp Account_Util.h Account.h
	g++ -c Account_Util.cpp
Savings_Account.o: Savings_Account.cpp Savings_Account.h Account.cpp Account.h
	g++ -c Savings_Account.cpp
Checking_Account.o: Checking_Account.cpp Checking_Account.h Account.cpp Account.h
	g++ -c Checking_Account.cpp
Trust_Account.o: Trust_Account.cpp Trust_Account.h Savings_Account.cpp Savings_Account.h Account.cpp Account.h
	g++ -c Trust_Account.cpp
