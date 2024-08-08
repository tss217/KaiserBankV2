#include "CashierFromBank.hpp"


CashierFromBank::CashierFromBank(Cpf cpf, std::string nome,  float wages, dayFromWeek  payDay):Worker(cpf,nome,wages,payDay){}

float CashierFromBank::bonus()const {
	return getWagesFromWoker() * 0.10;
}