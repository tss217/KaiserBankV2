#include <iostream>
#include "savingsAccount.hpp"

savingsAccount::savingsAccount(std::string number, Holders holders):Conta(number, holders){}



float savingsAccount::tax()const {
	return 0.03;
}
