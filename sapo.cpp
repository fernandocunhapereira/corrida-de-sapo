#include <iostream>
#include "sapo.h"

void Sapo::setNome(std::string n_){
	nome=n_;
}

std::string Sapo::getNome(){
	return nome;
}

void Sapo::setNumero(int num_){
	numero=num_;
}

int Sapo::getNumero(){
	return numero;
}

Sapo::Sapo(){
	nome="sem nome";
	numero=0;
}

Sapo::Sapo(Sapo &s){
	nome=s.getNome();
	numero=s.getNumero();
}