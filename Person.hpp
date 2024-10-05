#pragma once
#include <string>
#include <iostream>

template<typename Document>class Person
{
protected:
	Document document;
	std::string nome;
private:
	void checkNameSize(){
		if(nome.size()<5){
			std::cout<<"nome curto"<<std::endl;
			exit(1);
		}
	}
public:
	Person(Document document, std::string nome):document(document),nome(nome){
		checkNameSize();
	}
	std::string  getname()const{
		return nome;
	}
};

