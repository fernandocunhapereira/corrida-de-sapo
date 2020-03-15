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

void Sapo::setDistancia(int dis_){
	distancia=dis_;
}

int Sapo::getDistancia(){
	return distancia;
}

Sapo::Sapo(){
	nome="sem nome";
	numero=0;
	distancia=0;
}

Sapo::Sapo(Sapo &s){
	nome=s.getNome();
	numero=s.getNumero();
}