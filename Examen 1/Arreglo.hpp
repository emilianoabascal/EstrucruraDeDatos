#ifndef ARREGLO_HPP
#define ARREGLO_HPP
#include <iostream>
#include <string>
#include <fstream>  
#include <cstdlib>
using namespace std;
int tamanio;

class Arreglo{
	private:
		int *array;//Arreglo predefinido de numeros enteros.
	public:
		Arreglo();
		// Lee los datos de una archivo cuyo nombre recibe como parámetro
		void lecturaDatos(string archivo);
		// busca el elemento K en el arreglo, usando el algoritmo SECUENCIAL. Si lo // encuentra devuelve su posición y en caso contrario regresa un ‐1.
		int busquedaSecuencial(int k, int inicio, int final);
};

Arreglo:: Arreglo(){
}//Constructor sin parametros

void Arreglo::lecturaDatos(string file){//Funcionalidad del metodo lecturaDatos.
	int i = 0;//Variable iteradora.
	fstream archivo;//Se instancia el archivo.
	archivo.open(file);//Es una funcion que abre el archivo con el nombre del parametro de la funcion.
	string line;//String que hace referencia al valor de cada renglon del archivo.
	getline(archivo, line);//Se le da el valor del primer renglon a la variable line.
	tamanio = stoi(line);//Se convierte el valor de tipo string de line a int, se le asigna a la variable tamanio.
	array = new int[tamanio];//Se asigna espacio en la memoria para el arreglo que se va a usar, con el tamano de la variable tamanio.
	while(!archivo.eof()){//Mientras no se llegue al ultimo renglon.
		archivo.ignore(0, '\n');
		getline(archivo, line, '\n');
		array[i] = atoi(line.c_str());//asigna el valor del renglon actual al arreglo en la posicion i.
		i++;//Se aumenta el valor de i.
		
	}
	cout << endl << "El tamaño del arreglo es: " << tamanio << ".\n";//Imprime el tamano del arreglo.
	for (i = 0; i < tamanio; ++i){//Ciclo que imprime en consola el valor de cada elemento del arreglo.
		cout << "Valor " << i + 1 <<": " << array[i] << ".\n";
	}
}

int Arreglo:: busquedaSecuencial(int k, int inicio, int final){//Funcionalidad del metodo busquedaSecuencial.
	array = new int[final];
	if(array[1] == k || tamanio == 1){//Caso base que dice que si el valor del primer elemento es igual al numero que se paso por parametro de la funcion o el tamaño del arreglo es igual a 1, entonces se regresa 0.
		return 0;
	}
	for (int i = inicio; i <= final; i++){//Ciclo que itera por cada valor del arreglo hasta que i sea menor o igual al tamaño del arreglo.
	cout << array[i]<< endl;
		if(array[i] == k){//Si el elemento en la posicion i del arreglo es igual al numero que se paso por parametro de la funcion entonces se regresa el valor de i.
			return i;
			break;//Rompe el ciclo si la condicion se cumple.
		}
		if(array[i] != k && i == final){//Si el elemento en la posicion i del arreglo es diferente al numero que se paso por parametro de la funcion y la variable i es igual al tamaño del arreglo, entonces se regresa -1.
			return -1;
		}
	}
}

#endif