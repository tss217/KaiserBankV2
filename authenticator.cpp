#include "authenticator.hpp"

authenticator::authenticator(std::string password):password(password){}

bool authenticator::checkPassword(std::string passaword)const {
	return passaword == this->password;
}

