/*
    Realiza una funcion que tome como parametros un vector de numeros
    y su tamano y cambie el signo de los elementos del vector
*/ 

#include<iostream>

using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void imprimirVector(int vec[], int);

int vec[100],tam;

int main(){
    pedirDatos();
    cambiarSigno(vec,tam);
    imprimirVector(vec,tam);

    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del vector: ";
    cin>>tam;

    for (int i = 0; i < tam; i++)
    {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }   
}

void cambiarSigno(int vec[], int tam){
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= -1;
    }
}

void imprimirVector(int vec[], int tam){
    for (int i = 0; i < tam; i++)  
    {
        cout<<vec[i]<<" ";
    }
}