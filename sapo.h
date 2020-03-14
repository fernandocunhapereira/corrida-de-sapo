#ifndef SAPO_H
#define SAPO_H
#include <iostream>

class Sapo{
private:
	std::string nome;
	int numero;
public:
	void setNome(std::string n_);
	std::string getNome();
	void setNumero(int num_);
	int getNumero();
	Sapo(Sapo &s); 
	Sapo();
};

#endif