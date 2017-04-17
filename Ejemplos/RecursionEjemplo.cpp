//
//  Recursion.cpp
//  
//
//  Created by Emiliano Abascal Gurria on 16/01/17.
//
//

#include <iostream>

//Ejemplo de recursion

using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }else{
        return n * factorial(n -1);
    }
}

int main(){
    int x = 0;
    cin >> x;
    cout << factorial(x) << endl;
    
}

