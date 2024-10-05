
#include "Cpf.hpp"
#include <iostream>
#include <algorithm>

Cpf::Cpf(std::string indetification) :
	indentification(indetification) {

}

std::string Cpf::getIndetification()const {

	return indentification;
}
