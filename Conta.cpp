
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

std::pair<Conta::withdrawlResult, float> Conta::withDraw(float amountWithdraw) {
	

	if (amountWithdraw<0) {
		std::cout << "n�o pode sacer calor negativo" << std::endl;
		return std::make_pair(NegativeValue, balance);
	}


	float withDrawalFee = amountWithdraw *tax();
	float amountTowithDraw = withDrawalFee + amountWithdraw;

	if (amountTowithDraw > balance) {
		std::cout << "valor invalido" << std::endl;
		return std::make_pair(insuffcientBalance,balance);
	}

	balance -= amountTowithDraw;
	return std::make_pair(Sucesses,balance);
}

void Conta::deposit(float amountDeposit) {
	if (amountDeposit < 0) {
		std::cout << "valor invalido" << std::endl;
		return;
	}

	balance += amountDeposit;
}

void Conta::operator+=(float value) {
	deposit(value);
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