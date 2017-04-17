#include <iostream>
#include <string>
#include <vector>
#include "recursion.hpp"

using namespace std;
int main(){
	string e = "(())";
	if (anidacionCorrecta(e) == true){
		cout << "Anidacion correcta para: '" << e << "'."<< endl;
	}else {
		cout << "Anidacion incorrecta para: '" << e << "'."<< endl;
	}
	
	string f = "aaaaabbbbbcccccddddeeeeeggggggfffffffiiiiiii";
	cout <<"limpiaString para: '"<< f <<"' es: '" <<limpiaString(f) <<"'."<< endl;
	
	int n = 54;
	cout <<"La suma de digitos del numero: "<<n<< " es: "<< sumaDigitos(n) <<"."<< endl;
	
	string g = "hola Alejandro, hola Emiliano, soy Victor.";
	string h = "hola";
	cout <<"El substring '"<<h<<"' esta "<< cuantaSubstring(g, h) << " veces en el string '"<< g<<"'."<< endl;
}