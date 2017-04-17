#include <iostream>

using namespace std;


int BusquedaSecuencial(int a[], int n, int k){
	int respuesta;
	respuesta = -1; //supone fracaso
	for(int i = 0; i <= n; i++){
		if (k == a[i]) {
			respuesta = i;
			break;
		}
	}
	return respuesta;
}

int main() {
	int b = 10001;
	int a[b];
	int c = 9998;
	
	for (int i = 100; i <= 10000; i++){
		a[i] = i - 1;
	}
	cout << BusquedaSecuencial(a, b, c) << endl;
	
}