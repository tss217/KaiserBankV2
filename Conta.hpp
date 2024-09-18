#pragma once

#include <string>
#include <variant>
#include <utility>
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

	// estou criando novos tipos prara seren utilizados  no metodo de  saque 
	enum withdrawlResult{
		NegativeValue, insuffcientBalance
	};

	Conta(std::string number, Holders holders);

	virtual ~Conta();
	//criando um resultado par
	std::variant< withdrawlResult, float> withDraw(float amountWithdrawn);
	void deposit(float amoutDeposit);
	void operator+=(float value);

	float getBalance()const;
	std::string getNumber()const;
	static int getNumberOfAccounts();

	virtual float tax() const = 0;

	//essa funcao externa que tem acesso a classe
	friend std::ostream&  operator<<(std::ostream& cout, const Conta& conta);
};
