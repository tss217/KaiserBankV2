#pragma once

#include <string>
#include "Holders.hpp"

class Conta
{
private:

	std::string number;
	Holders holders;

protected:
	float balance;
	//short int accountType;

	static int numberOfAccounts;
public:

	Conta(std::string number, Holders holders);

	virtual ~Conta();

	virtual void withDraw(float amountWithdrawn);
	void deposit(float amoutDeposit);

	float getBalance()const;
	std::string getNumber()const;
	static int getNumberOfAccounts();

	virtual float tax() const = 0;

};