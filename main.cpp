
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
	cout  << "o saldo e "<< conta.withDraw(200)<<endl;
}

void login(authenticator& someOne, std::string password) {
	if (someOne.checkPassword(password)) {
		cout << "ok" << endl;
	}
	else {
		cout << "not ok" << endl;
	}
}

//overload do operador << para retonar a  exbicao da conta
//funcao extrena da classe conta
ostream&  operator<<(ostream& cout, const Conta& conta){
	Person holder  = conta.holders;
	cout<<"o saldo da conta e:"<< conta.getBalance()<<endl;
	cout<<"O titular:"<< holder.getname() << "\n"<<endl;
	return cout;
}

int main()
{
	//holders
	Holders holdersOne(Cpf("123445"), "Rosa Young","1234");
	Holders holdersTwo(Cpf("544321"), "Mayme Morton", "5431");
	Holders holdersThree(Cpf("5355555"), "Edna Hunter", "9874");
	
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
	cout<<  accountOne;
	cout<< accountTwo;
	cout<< accountthree;

	
	// funcao antiga para exibir o saldo da conta showBalance(accountthree);


	cout << "number of accounts: " << Conta::getNumberOfAccounts() << endl;


	ManagerBank MaudJoseph(Cpf("000.000.000-00"), "Maud Joseph", 1500, dayFromWeek::monday, "123456");


	return 0;

}