#pragma once
#include "Conta.hpp"

class currentAccount final:public Conta
{
public :
	currentAccount(std::string number, Holders holders);

	float tax()const override; 
	void tranferToAnotherAccount(Conta& conta, float value);
};

