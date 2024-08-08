#pragma once
#include <string>


class authenticator{
private:
	std::string password;
public:
	authenticator(std::string password);
	bool checkPassword(std::string password)const;
};

