#include <iostream>
#include "turma.h"

int Turma::total=0;

int main(){

	Turma t;
	
	t.setDescricao("Turma 1");
	t.setCodigo(1);
	t.setCapacidade(4);
	t.addSapo();
	t.addSapo();
	t.addSapo();
	t.addSapo();
	
	t.participantes[0].setNome("Joao");
	t.participantes[0].setNumero(53);
	t.participantes[1].setNome("Marcos");
	t.participantes[1].setNumero(654);
	t.participantes[2].setNome("Francisco");
	t.participantes[2].setNumero(1231);
	t.participantes[3].setNome("Masile");
	t.participantes[3].setNumero(46);

	std::cout<<"nome da turma = "<<t.getDescricao()<<std::endl;
	std::cout<<"codigo da turma = "<<t.getCodigo()<<std::endl;
	std::cout<<std::endl;
	t.listaSapo();
	std::cout<<"total de sapos = "<<Turma::getTotal()<<std::endl;

return 0;	
}