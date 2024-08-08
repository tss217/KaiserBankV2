#include "Holders.hpp"

Holders::Holders(Cpf cpf, std::string nome, std::string password)
    : Person(cpf, nome), authenticator(password) {

}