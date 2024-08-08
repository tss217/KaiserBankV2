#pragma once
#include "Worker.hpp"
#include "authenticator.hpp"
#include "weekDay.hpp"

class ManagerBank: public Worker,authenticator
{
public:
	ManagerBank(Cpf cpf, std::string nome, float wages, dayFromWeek payDay, std::string password);
	float bonus()const;
};

