#include <iostream>
#include "turma.h"

int Turma::total=0;

int main(){

	Turma t;
	t.setDescricao("Turma 1");
	t.setCodigo(1);
	t.setCapacidade(5);
	t.addSapo();
	t.addSapo();
	t.addSapo();
	t.addSapo();
	std::cout<<"nome da turma = "<<t.getDescricao()<<std::endl;
	std::cout<<"codigo da turma = "<<t.getCodigo()<<std::endl;
	std::cout<<std::endl;
	t.listaSapo();
	std::cout<<"total de sapos = "<<Turma::getTotal()<<std::endl;

return 0;	
}