#pragma once
#include "Person.hpp"
#include  "weekDay.hpp"
#include "Cpf.hpp"
#include <string>

class Worker: public Person{
private:
	float wages;
	short int payDay;

public:
	Worker(Cpf cpf, std::string nome, float wages, dayFromWeek payDay);
	std::string getNameFromWorker()const;
	virtual float bonus()const=0;
	float getWagesFromWoker()const;
};

