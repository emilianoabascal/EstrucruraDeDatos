#include <iostream>
using namespace std;

class NodoArbol{
	private:
		
		NodoArbol *derecho;
		NodoArbol* izquierdo;
	public:
		int dato;
		NodoArbol();
		int RegresaInfo();
		friend class Arbol;
};
class Arbol{
	public:
		Arbol();
		void crearArbol(NodoArbol *Apunt);
		NodoArbol *RegresaRaiz();
		void ImprimeIzquierda(NodoArbol *Apunt);
		
	private:
		NodoArbol *raiz;
		
};

NodoArbol::NodoArbol(){
	derecho = NULL;
	izquierdo = NULL;
}

int NodoArbol::RegresaInfo(){
	return dato;
}

Arbol::Arbol(){
	raiz = NULL;
}



void Arbol:: crearArbol(NodoArbol *Apunt){
	char Resp;
	Apunt = new NodoArbol;
	cout << "ingrese la informacion a almacenar";
	cin >> Apunt->dato;
	cout << Apunt -> dato << " Tiene hijo izquierdo?(S/N): ";
	cin >> Resp;
	
	if (Resp == 's'){
		crearArbol(Apunt->izquierdo);
		Apunt -> izquierdo = raiz;
	}
	cout << Apunt -> dato << " Tiene hijo derecho?(S/N): ";
	cin >> Resp;
	if (Resp == 's'){
		crearArbol(Apunt -> derecho);
		Apunt -> derecho = raiz;
	}
	raiz = Apunt;
	cout << Apunt -> dato;
}

void Arbol::ImprimeIzquierda(NodoArbol *Apunt){
	if(Apunt){
		if (Apunt -> izquierdo) {
			cout << Apunt -> izquierdo ->dato;
			ImprimeIzquierda(Apunt -> izquierdo);
		}
		ImprimeIzquierda(Apunt->derecho);
	}
}