// Ordenamiento por Seleccion

/*
    Es un algoritmo de ordenamiento que requiere O(n^2) operaciones para
    ordenar una lista de n numeros. Su funcionamiento es el siguiente:

        1. Buscar el mínimo elemento de la lista
        2. Intercambiar con el primer elemento
        3. Buscar el minimo del resto de la lista
        4. Intercambiar con el segundo
        5. Y asi sucesivamente
*/ 

#include<iostream>

using namespace std;

int main(){

    int numeros[] = {4,2,5,1,3};
    int i,j,aux,min;

    //Algoritmo del Ordenamiento por Seleccion

    for ( i = 0; i < 5; i++)
    {
        min = i;
        for (j = i + 1; j < 5; j++)
        {
            if (numeros[j]<numeros[min])
            {
                min = j;
            }
            
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }
    
    cout<<"Orden Ascendente: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<numeros[i]<<" ";
    }
    
    cout<<"\nOrden Descendente: ";
    for (int i = 4; i >= 0; i--)
    {
        cout<<numeros[i]<<" ";
    }

    cout<<endl;


    return 0;
} 