#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
#include "turma.h"

int Turma::total=30; //distancia a percorrer
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

	std::cout<<"distancias antes da corrida"<<std::endl;
	for(int i=0;i<3;i++){
		std::cout<<t.participantes[i].getNome()<<" "<<t.participantes[i].getDistancia()<<std::endl;
	}
	std::cout<<std::endl;

 //ALGORITMO DA CORRIDA
	for(int i=0; ;i++){
		for(int j=0;j<t.getCapacidade();j++){
		t.participantes[j].setDistancia(t.participantes[j].getDistancia()+Turma::geraRandom());
			if(t.participantes[j].getDistancia()>Turma::total){
				std::cout<<"o sapo vencedor é "<<t.participantes[j].getNome()<<std::endl;
				std::cout<<"a distancia percorrida foi "<<t.participantes[j].getDistancia()<<std::endl;
					for(int k=0;k<3;k++){
						std::cout<<t.participantes[k].getNome()<<" "<<t.participantes[k].getDistancia()<<std::endl;
					}
			return 1;
		}

		}
		/* //ALGORITMO DA CORRIDA ANTIGO ABAIXO...NAO FUNCIONAVA TAMBEM
		t.participantes[0].setDistancia(t.participantes[0].getDistancia()+Turma::geraRandom());
		if(t.participantes[0].getDistancia()>Turma::total){
			std::cout<<"o sapo vencedor é "<<t.participantes[0].getNome()<<std::endl;
			std::cout<<"a distancia percorrida foi "<<t.participantes[0].getDistancia()<<std::endl;
				for(int i=0;i<3;i++){
					std::cout<<t.participantes[i].getNome()<<" "<<t.participantes[i].getDistancia()<<std::endl;
				}
			return 1;
		}
		t.participantes[1].setDistancia(t.participantes[1].getDistancia()+Turma::geraRandom());
		if(t.participantes[1].getDistancia()>Turma::total){
			std::cout<<"o sapo vencedor é "<<t.participantes[1].getNome()<<std::endl;
			std::cout<<"a distancia percorrida foi "<<t.participantes[1].getDistancia()<<std::endl;
				for(int i=0;i<3;i++){
					std::cout<<t.participantes[i].getNome()<<" "<<t.participantes[i].getDistancia()<<std::endl;
				}			
			return 1;
		}
		t.participantes[2].setDistancia(t.participantes[2].getDistancia()+Turma::geraRandom());
		if(t.participantes[2].getDistancia()>Turma::total){
			std::cout<<"o sapo vencedor é "<<t.participantes[2].getNome()<<std::endl;
			std::cout<<"a distancia percorrida foi "<<t.participantes[2].getDistancia()<<std::endl;
				for(int i=0;i<3;i++){
					std::cout<<t.participantes[i].getNome()<<" "<<t.participantes[i].getDistancia()<<std::endl;
				}
			return 1;
		}*/
		//impressao dos resultados da rodada
		std::cout<<"rodada "<<i<<" da corrida"<<std::endl;
		for(int i=0;i<3;i++){
			std::cout<<t.participantes[i].getNome()<<" "<<t.participantes[i].getDistancia()<<std::endl;
		}
	std::cout<<std::endl;
	}
	for(int i=0;i<3;i++){
		std::cout<<t.participantes[i].getNome()<<" "<<t.participantes[i].getDistancia()<<std::endl;
	}

/*  //TESTE DO CONTADOR DE DISTANCIA DO SAPO
for(int i=0;i<20;i++){
	t.participantes[0].setDistancia(Turma::geraRandom());
	std::cout<<t.participantes[0].getDistancia()<<std::endl;
}
*/

/* //TESTE DO GERADOR DE NUMERO RANDOMICO
	Turma::random=Turma::geraRandom();
	std::cout<<Turma::random<<std::endl;
*/

/*  //TESTE PARA LISTAR NOMES SAPOS E TURMA
	std::cout<<"nome da turma = "<<t.getDescricao()<<std::endl;
	std::cout<<"codigo da turma = "<<t.getCodigo()<<std::endl;
	std::cout<<std::endl;
	t.listaSapo();
	std::cout<<"total de sapos = "<<Turma::getTotal()<<std::endl;
*/
return 0;	
}