/*
    Escriba un programa que devuelva la parte fraccionaria de cualquier numero introducido
    por el usuario. Por ejemplo, si se introduce el numero 256.879, deberia desplegarse el
    numero 0.879
*/ 

#include<iostream>

using namespace std;

//Prototipos de funciones

void pedirDatos();
float parteFraccionaria(float n); //Que devuelva: float

float numero;

int main(){
    pedirDatos();

    cout<<"La parte fraccionarai del numero es: "<<parteFraccionaria(numero)<<endl; 


    return 0; 
}

void pedirDatos(){
    cout<<"Digite el número: ";
    cin>>numero;
}

float parteFraccionaria(float n){
    int entero = n;

    float resultado = n - entero;

    return resultado;
}