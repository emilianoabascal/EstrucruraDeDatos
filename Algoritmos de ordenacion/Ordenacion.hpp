// Ordenacion.h
// Created by Emiliano Abascal Gurria on 13/02/17.
#include <iostream>
#include <vector>
using namespace std;

#ifndef Ordenacion_HPP
#define Ordenacion_HPP

class Ordenacion {
private:
		int *array;
		int t;
public:
	Ordenacion(int*, int);
	void selectionSort();
	void print();
	void bubbleSort();
	void insertionSort();
};

Ordenacion::Ordenacion(int *a, int n){
	array = a;
	t = n;
}

void Ordenacion:: selectionSort(){
	int posmin;
	int temp;
	for (int i = 0; i < t-1; i++){
		posmin = i;
		for(int j = i + 1; j < t; j++){
			if(array[j] < array[posmin]){
				posmin = j;
				
			}
			cout << i << " ";
		}
		if (posmin != i){
			temp = array[i];
			array[i] = array[posmin];
			array[posmin] = temp;
			cout << i << " ";
		}
	}
}

void Ordenacion:: bubbleSort() {
	bool s = true;
	int j = 0;
	int tmp;
	while(s){
		s = false;
		j++;
		for (int i = 0; i < t - j; i++) {
			if (array[i] > array[i + 1]) {
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				s = true;
				
			}
			
		}
		
		
	}
}

void Ordenacion:: insertionSort(){
	int j; 
	int temp;
	for (int i = 0; i < t; i++){
		j = i;
		while (j > 0 && array[j] < array[j-1]){
			temp = array[j];
			array[j] = array[j-1];
			array[j-1] = temp;
			j--;
			  }
			
		
		}
}

void Ordenacion:: print(){
	for (int i = 0; i < t-1; i++){
		if(i < t){
			cout << array[i]<<", ";
		}
	}
	cout << array[t- 1]<<". "<< endl;
}

#endif