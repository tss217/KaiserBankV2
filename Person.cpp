#include "Person.hpp"
#include <iostream>

Person::Person(Cpf cpf, std::string nome) :
	cpf(cpf),
	nome(nome)
{
	checkNameSize();
}
void Person::checkNameSize() {
	if (nome.size() < 5) {
		std::cout << "nome curto" << std::endl;
		exit(1);
	}
}

