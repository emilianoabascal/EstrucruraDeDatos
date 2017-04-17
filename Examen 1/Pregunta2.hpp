#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef PREGUNTA2_HPP
#define PREGUNTA2_HPP

bool palindromo(string palabra){
	int size = palabra.size();
	if((size == 2 && palabra.front() == palabra.back()) || (size == 3 && palabra.front() == palabra.back())){
		return true;
	}
	if (palabra.front() == palabra.back()){
		return palindromo(palabra.substr(1, size -2));
	}else if(palabra.front() != palabra.back()){
		return false;
	}
}
#endif