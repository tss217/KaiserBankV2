#include "ManagerBank.hpp"


ManagerBank::ManagerBank(Cpf cpf, std::string nome, float wages,dayFromWeek payDay, std::string password):Worker(cpf,nome,wages,payDay),authenticator(password){}

float ManagerBank::bonus()const {
	return getWagesFromWoker() * 0.50;
}