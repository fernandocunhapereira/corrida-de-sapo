#include <iostream>
#include "turma.h"
#include "sapo.h"

void Turma::setDescricao(std::string d_){
	descricao=d_;
}

std::string Turma::getDescricao(){
	return descricao;
}

void Turma::setCodigo(int cod_){
	codigo=cod_;
}

int Turma::getCodigo(){
	return codigo;
}

void Turma::setCapacidade(int cap_){
	capacidade=cap_;
	participantes=new Sapo[cap_];
	quantidade=0;
}

int Turma::getCapacidade(){
	return capacidade;
}

void Turma::addSapo(){
	if(capacidade>quantidade){
		total++;
		quantidade++;
	}
}

void Turma::listaSapo(){
	for (int i=0;i<quantidade;i++){
		std::cout<<"Sapo "<<i<<std::endl;
		std::cout<<participantes[i].getNome()<<std::endl;
		std::cout<<participantes[i].getNumero()<<std::endl;
		std::cout<<std::endl;
	}
}

Turma::~Turma(){
	delete[] participantes;
}

int Turma::getTotal(){
	return total;
}