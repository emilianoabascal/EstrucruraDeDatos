// Ordenacion.h
// Created by Emiliano Abascal Gurria on 13/02/17.
#include "Ordenacion.hpp"
#include <iostream>
using namespace std;

int main(){
	
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	Ordenacion prueba(arr, 10);
	prueba.selectionSort();
}