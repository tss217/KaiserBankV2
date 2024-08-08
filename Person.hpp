#pragma once
#include <string>
#include "Cpf.hpp"

class Person
{
protected:
	Cpf cpf;
	std::string nome;
private:
	void checkNameSize();
public:
	Person(Cpf cpf, std::string nome);
};

