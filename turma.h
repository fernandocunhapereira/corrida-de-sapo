#ifndef TURMA_H
#define TURMA_H
#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
#include "sapo.h"

class Turma{
private:
	std::string descricao;
	int codigo;
	int capacidade;
	int quantidade;

public:
	void setDescricao(std::string d_);
	std::string getDescricao();
	void setCodigo(int cod_);
	int getCodigo();
	void setCapacidade(int cap_);
	int getCapacidade();
	void addSapo();
	void listaSapo();
	Sapo *participantes;
	~Turma();
	static int total;
	static int getTotal();
	static int random;
	static int geraRandom();	
};

#endif