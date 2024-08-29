#include "currentAccount.hpp"

currentAccount::currentAccount(std::string number, Holders holders):Conta(number,holders)
{

}

float currentAccount::tax()const {
	return 0.05;
}

void currentAccount::tranferToAnotherAccount(Conta& destiny, float value) {
	withDraw(value);
	destiny.deposit(value);
}

//metodo overload para transferecia de conta
void currentAccount::operator +=(currentAccount & sourceAccount){
	sourceAccount.tranferToAnotherAccount(*this, sourceAccount.getBalance()/2);
}