#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
#include "turma.h"

int Turma::total=0; //distancia a percorrer
int Turma::random=0; //numero aleatorio (distancia do pulo)

int main(){

	srand((unsigned)time(NULL)); //alimentando gerador de numeros randomicos

	Turma t;
	
	t.setDescricao("Turma 1"); //criando uma turma de sapo
	t.setCodigo(1);
	t.setCapacidade(3);

	t.addSapo(); //adicionando sapos participantes
	t.addSapo();
	t.addSapo();
	
	t.participantes[0].setNome("Joao"); //identificando sapos
	t.participantes[0].setNumero(53);
	t.participantes[1].setNome("Marcos");
	t.participantes[1].setNumero(654);
	t.participantes[2].setNome("Francisco");
	t.participantes[2].setNumero(1231);

for(int i=0;i<10;i++){
	t.participantes[0].setDistancia(Turma::geraRandom());
	std::cout<<t.participantes[0].getDistancia()<<std::endl;
}



/* TESTE DO GERADOR DE NUMERO RANDOMICO
	Turma::random=Turma::geraRandom();
	std::cout<<Turma::random<<std::endl;
*/

/*  TESTE PARA LISTAR NOMES SAPOS E TURMA
	std::cout<<"nome da turma = "<<t.getDescricao()<<std::endl;
	std::cout<<"codigo da turma = "<<t.getCodigo()<<std::endl;
	std::cout<<std::endl;
	t.listaSapo();
	std::cout<<"total de sapos = "<<Turma::getTotal()<<std::endl;
*/
return 0;	
}