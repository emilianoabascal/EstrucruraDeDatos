//
//  clasePunto.hpp
//  
//
//  Created by Emiliano Abascal Gurria on 13/01/17.
//  API by Victor De La Cueva.
//

#include <iostream>
using namespace std;

class Punto {
    private:
        float *CoordenadaX, *CoordenadaY; // coordenada x y coordenada y del punto
    public:
    Punto(float, float); //inicializa las coordenadas del punto (x,y)
    float ObtenerCoordenadaX(); // regresa la coordenada x del punto
    float ObtenerCoordenadaY(); // regresa la coordenada y del punto
    void ModificaX(float); // cambia el valor de la coordenada x del punto
    void ModificaY(float); // cambia el valor de la coordenada y del punto
    void ImprimeCoordenadas(); // imprime las coordenadas del punto
};

Punto:: Punto(float x, float y){ //Es un metodo inicializador
    CoordenadaX = new float; //Asigna espacio en la memoria para la variable CoordenadaX
    CoordenadaY = new float; //Asigna espacio en la memoria para la variable CoordenadaY
    *CoordenadaX = x; //Asigna el valor del parametro x a la variable CoordenadaX que es un apuntador
    *CoordenadaY = y; //Asigna el valor del parametro y a la variable CoordenadaY que es un apuntador
}

float Punto:: ObtenerCoordenadaX(){ //Es un metodo que regresa el valor de la CoordenadaX
    return *CoordenadaX;
}

float Punto:: ObtenerCoordenadaY(){ //Es un metodo que regresa el valor de la CoordenadaY
    return *CoordenadaY;
}

void Punto:: ModificaX(float x){ //Modifica el valor de la variable CoordenadaX
    *CoordenadaX = x;
}

void Punto:: ModificaY(float y){//Modifica el valor de la variable CoordenadaY
    *CoordenadaY = y;
}

void Punto:: ImprimeCoordenadas(){ //Metodo que imprime las coordenadas de x y y.
    cout << "La coordenada en el punto y es: " << *CoordenadaY << " Y la coordenada en el punto x es: " << *CoordenadaX << endl;
}
