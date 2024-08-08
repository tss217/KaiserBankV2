#pragma once
#include "Conta.hpp"
#include "Holders.hpp"

class savingsAccount  final :public Conta
{
public:
	savingsAccount(std::string number, Holders holders);
	float tax() const override;
};

