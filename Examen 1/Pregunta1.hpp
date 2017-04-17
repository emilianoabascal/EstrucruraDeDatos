#ifndef PREGUNTA_HPP
#define PREGUNTA_HPP
#include <iostream>
using namespace std;

class Rectangulo {
	private:
	int *longitud1;
	float *longitud;
	
	public:
	Rectangulo(float, int);
	float getL();
	void Area();
	void Perimetro();
};

Rectangulo::Rectangulo(float l,int l2){
	longitud1 = new int;
	longitud = new float;
	*longitud1 = l2;
	*longitud = l;
}

float Rectangulo::getL(){
	  return *longitud;  
}

void Rectangulo::Perimetro(){
	cout << "Perimetro:"<< (*longitud)*2+(*longitud1)*2 << endl;
	
}
void Rectangulo::Area(){
	cout << "Area:"<<  (*longitud)*(*longitud1) << endl;
	
}

#endif