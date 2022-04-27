/* Paso de parametros de tipo vector

Parametros de la funcion:
    void nombreDeFuncion(tipo nombreArreglo[], int tamanoArreglo)

Llamada a la funcion
    nombreDeFuncion(nombreArreglo, tamanoArreglo)

*/ 

//Cuadrados de los elementos del vector

#include<iostream>

using namespace std;

void cuadrado(int vec[], int);
void muestra(int vec[], int);

int main(){
    const int TAM = 5; //el const significa que el vector nunca va a cambiar de tamano
    int vec[5] = {1,2,3,4,5};

    cuadrado(vec,TAM);
    muestra(vec, TAM);

    return 0;
}

void cuadrado(int vec[], int tam){
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= vec[i];
    }
    
}

void muestra(int vec[], int tam){
    for (int i = 0; i < tam; i++)  
    {
        cout<<vec[i]<<" ";
    }
}
