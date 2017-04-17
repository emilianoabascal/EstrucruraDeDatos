//
//  EjercicioRecursion.cpp
//  
//
//  Created by Emiliano Abascal Gurria on 16/01/17.
//
//

#include <iostream>
#include <array>
#include <string>

using namespace std;

string s = "hola mundo";
int t = 10;

int multiplicacion(int a, int b){
    if (b == 0 && a == 0){
        return 0;
    }else if(b == 1){
        return a;
    }else if (b > 1){
        return a + multiplicacion(a, b-1);
    }
    return 0;
}

int pot(int a, int b){
    if (b == 0 && a == 0){
        return 0;
    }else if(b == 1){
        return a;
    }else if (b > 1){
        return multiplicacion(a, pot(a, b - 1));
    }
    return 0;
}


int fibonacci(int n){
    if (n == 0){
        return n;
    }else if (n == 1){
        return n;
    }else if (n > 1){
        return fibonacci(n -1) + fibonacci(n -2);
    }
    
}


int main(){
    int b = 0;
    int a = 0;
    
    int *ar = new int[5];
    ar[0] = 5;
    ar[1] = 4;
    ar[2] = 3;
    ar[3] = 2;
    ar[4] = 1;
    cin >> a;
    cin >> b;
    cout << pot(a, b);
}

