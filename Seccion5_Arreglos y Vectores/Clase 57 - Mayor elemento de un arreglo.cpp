/* Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector */ 

#include<iostream>

using namespace std;

int main(){

    int numeros[100], n, mayor = 0;

    cout<<"Digite el numero de elementos que va a tener el vector: ";cin>>n;

    for (int i = 0; i < n; i++){
        cout<<i+1<<". Digite un numero: "; //Con esto se cambia el print en la pantalla 
        cin>>numeros[i]; //Guardando todos los elementos del vector
    

        if (numeros[i] > mayor)
        {
            mayor = numeros[i]; 
        }
        
    }

    for (int i = 0; i < n; i++) {
        cout<<numeros[i]<<endl;
    }
    cout<<"El numero mayor del vector es: "<<mayor<<endl;  

    return 0;
}