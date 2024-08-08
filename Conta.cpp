
#include "Conta.hpp"
#include <iostream>

int Conta::numberOfAccounts = 0;

Conta::Conta(std::string number, Holders holders) :
	number(number),
	holders(holders),
	balance(0)
{
	numberOfAccounts++;
}

Conta::~Conta() {
	numberOfAccounts--;
}

//operations


void Conta::withDraw(float amountWithdraw) {
	

	if (amountWithdraw<0) {
		std::cout << "não pode sacer calor negativo" << std::endl;
		return;
	}


	float withDrawalFee = amountWithdraw *tax();
	float amountTowithDraw = withDrawalFee + amountWithdraw;

	if (amountTowithDraw > balance) {
		std::cout << "valor invalido" << std::endl;
		return;
	}

	balance -= amountTowithDraw;
}

void Conta::deposit(float amountDeposit) {
	if (amountDeposit < 0) {
		std::cout << "valor invalido" << std::endl;
		return;
	}

	balance += amountDeposit;
}

//sets and gets

float Conta::getBalance()const{
	return balance;
}

std::string Conta::getNumber()const {
	return number;
}

int Conta::getNumberOfAccounts() {
	return numberOfAccounts;
}