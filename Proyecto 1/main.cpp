//
//  main.cpp
//  
//
//  Created by Emiliano Abascal Gurria on 16/01/17.
//
//

#include <iostream>
#include "clasePunto.hpp"
using namespace std;

int main(){ //funcion main.
    float x = 0;
    float y = 0;
    cout << "Dime la coordenada x: ";
    cin >> x;
    cout << "Dime la coordenada y: ";
    cin >> y;
    
    
    Punto prueba1(x, y); //Se instancian las coordenadas
    prueba1.ImprimeCoordenadas();//Se imprimir las coordenadas
    
    cout << "Dime la coordenada x: ";
    cin >> x;
    cout << "Dime la coordenada y: ";
    cin >> y;
    
    prueba1.ModificaX(x);//Se modifica la coordenada X
    prueba1.ModificaY(y);
    prueba1.ObtenerCoordenadaX();
    
    prueba1.ImprimeCoordenadas();
    
}
