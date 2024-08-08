#include "Worker.hpp"
#include <iostream>

Worker::Worker(Cpf cpf,std::string nome, float wages, dayFromWeek  payDay):Person(cpf,nome),wages(wages),payDay(payDay){}

std::string Worker::Worker::getNameFromWorker()const {
	return nome;
}

float Worker::getWagesFromWoker()const {
	return wages;
}

