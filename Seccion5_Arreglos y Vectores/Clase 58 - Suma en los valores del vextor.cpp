/*  Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo
    valor equivale a la suma del resto de numeros del vector */ 

#include<iostream>

using namespace std;

int main(){
    int numeros[100], n;
    int suma = 0, mayor = 0;

    cout<<"Digite el numero de elementos que va a tener el vector: "; cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>numeros[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        suma += numeros[i];

        if (numeros[i] > mayor)
        {
            mayor = numeros[i]; 
        }
        
    } 
    
    if (mayor == suma - mayor)
    {
        cout<<"El numero "<<mayor<<" equivale a la suma de los demás";
    }
    else{
        cout<<"No existe ningun numero igual a la suma de los demas";
    }

    return 0;
}