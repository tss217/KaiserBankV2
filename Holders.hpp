#pragma once

#include <string>
#include "Person.hpp"
#include "Cpf.hpp"
#include "authenticator.hpp"

class Holders : public Person<Cpf>, public authenticator {
public:
    Holders(Cpf cpf, std::string nome, std::string password);
};