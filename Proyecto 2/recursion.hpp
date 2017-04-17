//  recursion.cpp
//  Created by Emiliano Abascal Gurria on 23/01/17.
//  API by Victor de la Cueva
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// recibe un string y regresa el string “limpio”
string limpiaString(string s);
// recibe un string s y un substring sub y regresa el número de veces que
// aparece el substring en el string.
int cuantaSubstring(string s, string sub);
// recibe un entero n y regresa la suma de sus dígitos
int sumaDigitos(int n);
// recibe un string s formado con paréntesis anidados y regresa true si los // paréntesis están correctamente anidados y false si no lo están.
bool anidacionCorrecta(string s);

int cuenta(string e){//Funcion que sirve para contar el numero de elementos que hay en un arreglo.
    int i,count = 0;
    for(i = 0; e[i] != '\0'; i++){
        count++;
    }
    return count;
}
string limpiaString(string s){//Se le da funcionalidad a la funcion limpiaString que regresa un string
    int f = cuenta(s);//Variable que almacena el tamanio del string
    string res;//string que contendra el string resultante
    if(f == 0 || f == 1){//caso base que dice que si el tamanio el 0 o 1 se regresa el string original.
        return s;//se regresa el string original
    }else if (s[0] == s[1]){
        return limpiaString(s.substr(1));//si el elemento inicial es igual al siguiente entonces se recursa la funcion pero el argumento sera el string original a partir del primer elemento.
    }else if(s[0] != s[1]){
        return res = s[0] + limpiaString(s.substr(1));//si el elemento inicial es diferente al siguiente entonces se recursa la funcion pero el argumento sera el string original a partir del primer elemento, y se le aniade el primer elemento del string oroginal
    }
}

int cuantaSubstring(string s, string sub){//Se le da funcionalidad a la funcion cuentaSubstring
    int t = cuenta(s);//Variable que almacena el tamanio del string
    string res;//string que contendra el string resultante
    if(t == 0 || t == 1){
        return 0;//caso base que dice que si el tamanio es 0 o 1 se regresa el numero 0.
    }else if((s[1] == sub[1]) && (s[0] == sub[0])){
        return cuantaSubstring(s.substr(1), sub) + 1; //Si el primer elemento del string es igual al primero del substring y el segundo elemento del string es igual al segundo elemento del substring se regresa la llamada de la misma funcion + 1, para contar cuantas veces esta el substring.
    }else {
        return cuantaSubstring(s.substr(1), sub);// si no se llama la funcion metiendo el string a partir del segundo elemento y el sbstring original
    }
}


int sumaDigitos(int n){//Se le da funcionalidad a la funcion SumaDigitos
    if ((n == 0) || (n == 1)){
        return n;//Se regresa el numero original, si este es igual a 0 o 1.
    }else{
        return n%10 + sumaDigitos(n/10);//Se regresa el ultimo digito mas la llamada de la misma funcion siendo el argumento “n/10” para pasar el numero menos el ultimo digito, recursionandola.
    }
}
bool anidacionCorrecta(string s){//Se le da funcionalidad a la funcion anidacionCorrecta
    if ((cuenta(s) == 2) && (s.front() == '(') && (s.back() == ')')){
        return true;//Si el numero de elementos de el string original es 2 y el primer elemento es '(' y el ultimo es ')' entonces se regresa verdadero
    }else if((s.front() == '(') && (s.back() == ')')){
            return anidacionCorrecta(s.substr(1, (cuenta(s) - 2)));//Si el primer elemento es '(' y el ultimo es ')' entonces se recursiona la funcion metiendo como argumento al string menos el primer y ultimo elemento.
    }else if ((cuenta(s) == 0) || (cuenta(s)%2 != 0)){
        return false;// Si el numero de elementos es 0 o el numero de elementos es impar entonces regresa 0.
    }
}