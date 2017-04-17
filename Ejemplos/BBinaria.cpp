#include <iostream>

using namespace std;
int indice = 0;
int busquedaBinaria(int a[], int primero, int ultimo, int k){
    if(ultimo < primero){
        return  -1;
    }else{
        int medio = (primero + ultimo)/2;
        if(k == a[medio]){
            return medio;
        }else if(k < a[medio]){
            return busquedaBinaria(a, primero, medio-1, k);
        }else{
            return busquedaBinaria(a, medio + 1, ultimo, k);
        }
    }
}

int main() {
    int a[9] = {-3, -1, 0, 2, 3, 5, 6, 7, 9};
    cout << busquedaBinaria(a, 0, 8, -2);
}
