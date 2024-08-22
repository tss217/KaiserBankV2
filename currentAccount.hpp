#pragma once
#include "Conta.hpp"

class currentAccount final:public Conta
{
public :
	currentAccount(std::string number, Holders holders);

	float tax()const override; 
	void tranferToAnotherAccount(Conta& conta, float value);

	//overload - operacao de tranferencia entre contas correntes
	
	void operator +=(currentAccount & sourceAccount);
};

