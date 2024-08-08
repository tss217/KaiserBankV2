
#include <iostream>
#include <string>
#include "Conta.hpp"
#include "savingsAccount.hpp"
#include "Holders.hpp"
#include "Cpf.hpp"
#include "Worker.hpp"
#include "currentAccount.hpp"
#include "authenticator.hpp"
#include "ManagerBank.hpp"

using namespace std;

void showBalance(const Conta& conta) {
	cout << "your balance is: " << conta.getBalance()<< endl;
}

void doWithDraw(Conta&conta) {
	conta.withDraw(200);
}

void login(authenticator& someOne, std::string password) {
	if (someOne.checkPassword(password)) {
		cout << "ok" << endl;
	}
	else {
		cout << "not ok" << endl;
	}
}

int main()
{
	Holders holdersOne(Cpf("123445"), "ts217","1234");
	Holders holdersTwo(Cpf("544321"), "217TS", "5431");


	savingsAccount accountOne("12345", holdersOne);
	currentAccount accountTwo("67890", holdersTwo);


	accountOne.deposit(400);
	accountTwo.deposit(900);

	doWithDraw(accountOne);
	doWithDraw(accountTwo);

	accountTwo.tranferToAnotherAccount(accountOne, 250);

	showBalance(accountOne);
	showBalance(accountTwo);

	

	cout << "number of accounts: " << Conta::getNumberOfAccounts() << endl;
	dayFromWeek tuesday = tuesday;

	ManagerBank mane(Cpf("000.000.000-00"), "mane", 1500, tuesday, "123456");


	return 0;

}