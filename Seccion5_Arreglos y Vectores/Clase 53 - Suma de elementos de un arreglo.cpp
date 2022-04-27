/* Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos */ 

#include<iostream>

using namespace std; //cin - cout

int main(){
     int numeros[] = {1,2,3,4,5};
     int suma = 0;

     for (int i = 0; i < 5; i++) //Los vectores inician sus valores en 0 hasta n-1
     {
         //suma = suma + numeros[i]
         suma += numeros[i]; 
     }
     
    cout<<"La suma de los elementos del vector es: "<<suma<<endl;

    return 0;
} 