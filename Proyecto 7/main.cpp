#include <iostream>

#include "Lista.hpp"

int main() {
	
	int n;
	Lista lista;
		lista.insertaInicio(70);
		lista.insertaInicio(10);
		lista.insertaInicio(5);
		lista.imprimeLista();
		
		lista.insertaFinal(1);
		lista.insertaFinal(5);
		lista.insertaFinal(6);
		lista.imprimeLista();
		
		lista.insertaDespues(15,5);
		lista.insertaDespues(12,70);
		lista.imprimeLista();
		
		lista.eliminaPrimero(n);
		lista.imprimeLista();
		lista.eliminaPrimero(n);
		lista.imprimeLista();
		
		lista.eliminaUltimo(n);
		lista.eliminaUltimo(n);
		lista.imprimeLista();
		
		lista.eliminaNodo(70,n);
		lista.imprimeLista();
		
	return 0;
}