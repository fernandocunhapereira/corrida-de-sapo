#ifndef SAPO_H
#define SAPO_H
#include <iostream>

class Sapo{
private:
	std::string nome;
	int numero;
	int distancia;
public:
	void setNome(std::string n_);
	std::string getNome();
	void setNumero(int num_);
	int getNumero();
	void setDistancia(int dis_);
	int getDistancia();
	Sapo(Sapo &s); 
	Sapo();
};

#endif