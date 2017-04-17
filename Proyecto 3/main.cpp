#include <iostream>
#include <string>
#include <fstream>  
#include "Arreglo.hpp"
using namespace std;
int main(){
	Arreglo arr(10);
	arr.lecturaDatos("proyecto.txt");
	arr.mergeSort(0, 9);
	arr.Escribe();
	
}