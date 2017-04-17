//Por Emiliano Abascal Gurría
//API Por Victor de la Cueva

#include <iostream>

using namespace std;

class Pila{
	private:
		int *pila;
		int MAX;
		int top;
	public:
		// Inserta un elemento en la pila. Regresa true si la operación // fue exitosa y false en caso contrario.
		Pila(int c);
		bool push(int dato);
		// Saca un elemento de la pila. Regresa true si la operación fue // exitosa y false en caso contrario.
		bool pop(int &dato);
		// Regresa true si la pila está llena.
		bool pilaLlena();
		// Regresa true si la pila está vacía.
		bool pilaVacia();
		// Imprime el valor de la variable top y todos los elementos de la // pila en una pila en una fila.
		void imprimePila();
		~Pila();
};

Pila:: Pila(int c){//Constructor de la clase Pila.
	if (c <= 0){//Si el tamaño ingresado por el usuario es menor o igual a cero, entonces se regresa un mensaje de error.
		cout << "La pila no puede tener tamanio negativo";
	}else{//Sino el tamanio ingresado se le asigna a la variable MAX.
		MAX = c;
		pila = new int[MAX];
		top = -1;
	}
}

bool Pila:: pop(int &dato){//Funcionalidad de la funcion pop
	if (top < 0){//Si el valor de top es menor que cero entonces se regresa falso.
		return false;
	}else{//Sino a la variable dato, que es una referencia, se le asignara el valor de la pila en la posicion top.
		dato = pila[top];
		pila[top] = 0;//la pila en el espacio top se igualara a cero.
		top--;//el valor de top disminuira en uno.
		return true;//Se regresa verdadero.
	}
}

bool Pila:: pilaVacia(){//Funcionalidad de la funcion pilaVacia.
	if (top == -1){//Si top es igual a -1, se regresa verdadero.
		return true;
	}else{//sino se regresa falso.
		return false;
	}
}

void Pila:: imprimePila(){//Funcionalidad de la funcion imprimePila
	for (int i = 0; i <= top; i++){//Para i que es igual a cero, i tiene que ser menor o igual a top e i, aumentara su valor en uno cada vez:
		cout << pila[i] << " ";//Imprime la pila en el valor de i.
	}
	cout << endl;//salto de linea.
}

bool Pila:: push(int dato){//Funcionalidad de la funcion push
	if (top >= MAX){//Si top es mayor o igual a MAX, entonces se regresa falso
		return false;
	}else if(top < MAX){//sino, si top es menor que MAX, entonces top aumenta su valor en uno.
		top++;
		pila[top] = dato;//pila en la posicion top es igual a dato.
		return true;//Se regresa verdadero.
	}
}

bool Pila:: pilaLlena(){//Funcionalidad de la funcion pilaLlena
	if (pilaVacia() == true){//si la pila esta vacia, entonces se regresa falso.
		return false;
	}else if (top == MAX){//sino si top es igual a MAX se regresa verdadero.
		return true;
	}
}

Pila:: ~Pila(){//Es el destructor de la clase Pila.
	delete[] pila;
}