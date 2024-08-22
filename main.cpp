
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
	//holders
	Holders holdersOne(Cpf("123445"), "ts217","1234");
	Holders holdersTwo(Cpf("544321"), "217TS", "5431");
	Holders holdersThree(Cpf("5355555"), "jhoon", "9874");
	
	//conta poupanca
	savingsAccount accountOne("12345", holdersOne); 

	//count corrente
	currentAccount accountTwo("67890", holdersTwo); 
	currentAccount accountthree("55555", holdersThree);

	//metodos para depositar saldo na conta
	accountOne.deposit(200);
	accountTwo.deposit(200);
	accountthree.deposit(200);

	// metodo oveload para depositar 
	(Conta&)accountOne+=(400); //(cast&) o cast faz referencia a conta  ( quando se trata de herenca n e possivel a o overload
	(Conta&)accountTwo+=(400);
	(Conta&)accountthree += (400);

	//metodo oveload de tranferencia entre contas

	accountTwo += accountthree;

	//doWithDraw(accountOne);
	//doWithDraw(accountTwo);

	//accountTwo.tranferToAnotherAccount(accountOne, 250);

	//extrato da conta
	showBalance(accountOne);
	showBalance(accountTwo);
	showBalance(accountthree);
	

	cout << "number of accounts: " << Conta::getNumberOfAccounts() << endl;


	ManagerBank mane(Cpf("000.000.000-00"), "mane", 1500, dayFromWeek::monday, "123456");


	return 0;

}