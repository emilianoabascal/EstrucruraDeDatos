//Por Emiliano Abascal Gurría A01023234
//API por Victor Manuel de la Cueva.
//Apoyo por Daniela Flovier y Enrique Lira.

#include <iostream>
#ifndef LISTA_HPP
#define LISTA_HPP
using namespace std;
			
class Lista{
	public:
		Lista();
		// Inserta un elemento al inicio de la lista 
		void insertaInicio(int dato);
		// Inserta un elemento al final de la lista
		void insertaFinal(int dato);
		// Inserta un elemento después de un dato de referencia
		bool insertaDespues(int dato, int ref);
		// Elimina el primer elemento de la lista. Regresa true si la operación fue exitosa y false en caso contrario.
		bool eliminaPrimero(int &dato);
		// Elimina el último elemento de la lista. Regresa true si la operación fue exitosa y false en caso contrario.
		bool eliminaUltimo(int &dato);
		// Elimina un elemento dado de la lista. Regresa true si la operación fue exitosa y false en caso contrario.
		bool eliminaNodo(int ref, int &dato);
		// Imprime todos los elementos de la lista en una fila.
		void imprimeLista();
	private:
		typedef struct nodo{
			int cache;
			nodo *next;
		}
		
		*Nodo;
		Nodo head;
	
};
#endif

Lista:: Lista(){//Constructor de la clase.
	head = NULL;//El valor inicial de la lista es nulo.
}

void Lista::insertaInicio(int dato){//Funcionalidad del metodo insertaInicio
	Nodo x = new nodo;//Se declara el nodo x de tipo nodo.
	x -> cache = dato;//el dato se almacena en el nodo x.
	x -> next = head;//El siguiente elemento de la lista sera el primer elemento.
	head = x;// El primer elemento sera x.
}

void Lista::insertaFinal(int dato){//Funcionalidad del metodo insertaFinal
	Nodo first = new nodo;
	Nodo last = new nodo;
	
	first->cache = dato;//El nodo first que apunta al cache es igual al dato ingresado.
	first->next = NULL;//El nodo first que apunta a next, es nulo.


	if(head != NULL){//Si la lista tiene uno o mas nodos entonces el nodo last va a ser igual a head.
		last = head; 
		while (last -> next){//mientras last apunte a valor nulo (next) entonces last sera last apuntando al valor siguiente.
			last = last -> next;
		}
		last -> next = first;//El nodo last apuntando a next sera igual al valor del nodo first.	
	}else{
		head = first; //Si no, entonces el primer elemento sera el nodo first.
	}
}


bool Lista::insertaDespues(int dato, int ref){//Funcionalidad del metodo insertaDespues
	Nodo x = new nodo;
	Nodo y = new nodo;
		if (head != NULL){//Si la lista tiene uno o mas nodos entonces el nodo y va a ser igual a head.
			y =  head;
			while ((y != NULL )&& (y->cache != ref)){//Mientras el valor de la referencia no se encuentre, se recorrera la lista.
				y = y->next;
			}
			if (y == NULL){//Si el nodo y es nulo entonces se regresa falso.
				return false; 
			}else if(y != NULL){//sino, entonces si el nodo no es nulo, x apuntando a cache sera el dato, x apuntando a next sera y apuntando a next, y apuntando a next sera x, y se regresa true.
				x -> cache = dato; 
				x -> next = y -> next;
				y -> next = x; 
				return true;
			}
		}else{//Si no se regresa falso.
			return false;
		}
}

bool Lista::eliminaNodo(int ref, int &dato){//Funcionalidad del metodo eliminaNodo.
	Nodo x = new nodo;
	Nodo y = new nodo;

	if (head != NULL){//Si la lista tiene uno o mas nodos entonces el nodo x sera el valor del primer nodo.
		x = head;
		while ((x->next) && (x->cache != ref)){// Mientras el valor de la referencia no se encuentre, se cambia el valor del nodo al siguiente, hasta que se encuentre.
			y = x;
			x = x->next;
		}
		if (x->cache != ref){
			return false; //Si x apuntando a cache es diferente a ref entonces se regresa falso porque no se encontro el nodo.
		}

		else{// Si se encontró el nodo entonces, si el primero tiene la direccion del nodo x, entonces head, guarda el apuntador a next,
			if (head == x){
				head = head->next; 
			}else{//
				y->next = x->next; //sino, se anexa el valor del nodo.
			}
		dato = x->cache;//Se almacena la informacion de lo que se borrara.
		delete x; // Se elimina el nodo x.
		return true; // Se devuelve true.
		}
	}else{ //Si la lista no contiene ningun elemento, se regresa falso.
		return false; 
	}
}

bool Lista::eliminaPrimero(int &dato){//Funcionalidad del metodo, elimina primero.
	Nodo x = NULL;
	if (head == NULL){//Si la lista no tiene ningun nodo entonces se regresa falso.
		return false;
	}else if(head != NULL){ // Si tiene un elemento o mas, entonces x sera el primer nodo, el primer elemento sera x apuntando a next, dato sera igual a x apuntando a cache almacenando lo que se eliminara.
		x = head;
		head = x -> next;
		dato = x -> cache;
		delete x; // Se borra el espacio de x y se devuelve true.
		return true; 
	}
}

bool Lista::eliminaUltimo(int &dato){//Funcionalidad del metodo elimina ultimo.
	Nodo x = new nodo;
	Nodo y = new nodo;
	if (head != NULL){//Si la lista tiene uno o mas nodos entonces,
		if(!head -> next){//Si en la lista solo hay un elemento, entonces se borra el espacio del primero y se marca como nulo.
			delete head; // Eliminamos el elemento
			head = NULL;
		}else{ //Sino, entonces el nodo x almacena a head.
			x = head; 
			// Mientras 'x' apunte a 'next' y almacenara la direccion de p y x almacenara el apuntador a next.
			while(x -> next){
				y = x; 
				x = x -> next;
			}
			y -> next = NULL; // El nodo y que apunta a next es nulo, el dato es igual a x apuntando a cache, almacenando su informacion.
			dato = x -> cache;
			delete x;//Se elimina x, y se regresa true.
			return true;
		}
	}else{ // Si la lista está vacía entonces se regresa falso.
		return false;
	}
}

void Lista::imprimeLista(){//Funcionalidad del metodo imprimeLista
	Nodo x = new nodo;
	x = head;
	if (x == NULL){// Si no hay nodos, entonces se da mensaje de error
		cout << "No hay elementos en la lista.";	
	}else{//si hay nodos, entonces se imprimen los valores de la lista mientras el valor del nodo x, sea diferente a NULL.
	cout << "Lista:" << endl;
		while(x != NULL){
			cout  << x -> cache <<"\n";
			x = x->next;
		}
	}
}