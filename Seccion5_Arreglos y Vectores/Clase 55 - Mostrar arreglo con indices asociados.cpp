/*  Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida
    estandar los numeros del vector con sus indices asociados */ 

#include <iostream>

using namespace std;

int main(){
    int numeros[100], n; // un numero grande porque no sabemos cuantos va a meter el usuario  

    cout<<"Digite el numero de elementos que va a tener el vector: ";cin>>n;

    for (int i = 0; i < n; i++){
        cout<<"Digite un numero: ";
        cin>>numeros[i]; //Guardando todos los elementos del vector
    }
    
    // Ahora se mostrara los elementos con sus indices asociados 

    for (int i = 0; i < n; i++) {
        cout<<i<<" -> "<<numeros[i]<<endl;
    }
    
    return 0;
}