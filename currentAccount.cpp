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
