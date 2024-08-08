#pragma once
#include "Worker.hpp"
#include "weekDay.hpp"

class CashierFromBank:public Worker
{
public:
	CashierFromBank(Cpf cpf, std::string nome, float wages, dayFromWeek payDay);
	float bonus()const;
};

