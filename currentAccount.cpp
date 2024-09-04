#include "currentAccount.hpp"

currentAccount::currentAccount(std::string number, Holders holders):Conta(number,holders)
{

}

float currentAccount::tax()const {
	return 0.05;
}

//foi utilizado o tipo  criado na class conta para que haja um  saida mais adquada do metodo 

void currentAccount::tranferToAnotherAccount(Conta& destiny, float value) {
	Conta::withdrawlResult result = withDraw(value);

	if(result  == Sucesses){
		destiny.deposit(value);
	}
	
}

//metodo overload para transferecia de conta
void currentAccount::operator +=(currentAccount & sourceAccount){
	sourceAccount.tranferToAnotherAccount(*this, sourceAccount.getBalance()/2);
}