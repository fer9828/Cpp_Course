/*
    Realiza una funcion que tome como parametros un vector de enteros y su tamano
    e imprima un vector con los elementos impares del vector recibido
*/ 

#include<iostream>

using namespace std;

void pedirDatos();
void vectorImpar(int vec[], int);
void imprimirVector(int impar[], int);

int vec[100],tam;

int main(){
    pedirDatos();
    vectorImpar(vec,tam);

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

void vectorImpar(int vec[], int tam){
    int vecImpares[100];
    int j = 0;

    for (int i = 0; i < tam; i++)
    {
        if (vec[i]%2!=0)
        {
            vecImpares[j] = vec[i];
            j++;
        }
    }

    cout<<"\nImprimiendo los elementos impares del vector: \n";
    for (int i = 0; i < j; i++)
    {
        cout<<vecImpares[i]<<" ";
    }
    cout<<endl;  
}
