#include <iostream>
#include "Pila.h"

using namespace std;
int main() {
	Pila prueba(5);
	
	prueba.imprimePila();
	prueba.pilaVacia();
	prueba.pilaLlena();
	int x;
	prueba.pop(x);
	prueba.push(5);
	prueba.push(7);
	prueba.push(8);
	prueba.pop(x);
	prueba.imprimePila();
	
	
}